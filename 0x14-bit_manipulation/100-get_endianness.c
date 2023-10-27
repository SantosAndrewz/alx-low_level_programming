#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian otherwise 1 for little endian.
 */
int get_endianness(void)
{
	struct
	{
		unsigned int value;
		unsigned char byte_indicator;
	} data = {1, 0};

	data.value = 1;

	if (data.byte_indicator == 1)
	{
		return (1);
	}
	else
		return (0);
}
