#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to zero.
 * @n: pointer to the number to be modified.
 * @index: the index of the bit to be set to 0.
 *
 * Return: 1 for success otherwise -1 in case of an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maskbit = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	maskbit = ~(1 << index);
	*n = *n & maskbit;

	return (1);
}
