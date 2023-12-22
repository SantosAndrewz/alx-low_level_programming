#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: refers to the size of the array.
 *
 * Return: a pointer to the newly created hash table otherwise NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int x;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
	{
		return (NULL);
	}
	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	{
	return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		hash_t->array[x] = NULL;
	}
	return (hash_t);
}
