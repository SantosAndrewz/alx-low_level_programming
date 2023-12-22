#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - gives you the index of a key.
 * Description: the djb2 algorithm used.
 * @key: a pointer to the key.
 * @size: the size of the array of the hash table.
 *
 * Return: index at which key/value pair should be stored in hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
