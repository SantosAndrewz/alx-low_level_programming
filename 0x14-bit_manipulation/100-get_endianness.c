#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian otherwise 1 for little endian.
 */
int get_endianness(void)
{
	/* struct endiandata - holds the value and byte indicators.
	 * @vslue: unsigned integer.
	 * @byte_indicator: byte to indicate endianness.
	 */
	struct endiandata
	{
		unsigned int value;
		unsigned char byte_indicator;
	} data = {0, 1};

	if (data.byte_indicator == 1)
	{
		return (1);
	}
	else
		return (0);
}
