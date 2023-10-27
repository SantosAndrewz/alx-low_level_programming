#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value a bit to 1.
 * @n: pointer to the number to be modified.
 * @index: index of the bit to be set to 1, starting from 0.
 *
 * Return: 1 for success otherwise -1 for error incurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maskbit = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	maskbit = 1 << index;
	*n = *n | maskbit;

	return (1);
}
