#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian otherwise 1 for little endian.
 */
int get_endianness(void)
{
	char *y;
	int x;

	x = 1;
	y = (char *)&x;
	return (*y);
}
