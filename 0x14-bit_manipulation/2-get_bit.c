#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index of the number provided
 * @n: the number to be evaluated for the bits.
 * @index: index of the bit to get, starting from 0.
 * Return: value of the bit at index position, or -1 in case of error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_i = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		b_i = (n >> index) & 1;
		return (b_i);
	}
}
