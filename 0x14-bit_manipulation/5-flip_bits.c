#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits to flip to get to another number.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, bit_count = 0;
	unsigned long int xcl = n ^ m;

	for (x = 0; x < sizeof(n) * 8; x++)
	{
		if (xcl & 1)
		{
			bit_count++;
		}
		xcl >>= 1;
	}
	return (bit_count);
}
