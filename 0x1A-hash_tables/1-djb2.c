#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: the input string for generating hash value.
 *
 * Return: hash value calculated.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
