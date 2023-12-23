#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table you want to look into.
 * @key: pointer to the key you are looking for.
 *
 * Return: value associated with the element or NULL for failure to find key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
	{
		return (NULL);
	}
	n = ht->array[x];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;
	return ((n == NULL) ? NULL : n->value);
}
