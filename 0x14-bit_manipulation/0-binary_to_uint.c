#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an umsigned int.
 * @b: pointer to a binary string.
 *
 * Return: the converted number, or 0 if b is NULL, or having nonbinary chars.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0;
	int x = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		y <<= 1;
		if (b[x] == '1')
		{
			y = y + 1;
		}
		x++;
	}
	return (y);
}
