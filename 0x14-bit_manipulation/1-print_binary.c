#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representation of a number provided.
 * @n: number that is to be printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	char prnt = 0;

	for (mask = 1UL << (sizeof(unsigned long int) * 8 - 1); mask > 0; mask >>= 1)
	{
		if (n & mask)
		{
			prnt = 1;
			_putchar('1');
		}
		else if (prnt || mask == 1)
		{
			_putchar('0');
		}
	}
}
