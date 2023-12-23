#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table.
 * Description: in case collision occurs, add a new node at beginning olf list.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key and it can not be empty.
 * @value: the value associated with the key, duplicated and can be empty.
 *
 * Return: 1 for success and 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x, i;
	char *v_copy = NULL;
	hash_node_t *n = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		free(v_copy);
		return (0);
	}

	v_copy = strdup(value);
	if (v_copy == NULL)
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);
	x = i;
	while (ht->array[x])
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = v_copy;
			free(n);
			return (1);
		}
		x++;
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(n);
		return (0);
	}
	n->value = v_copy;
	n->next = ht->array[i];
	ht->array[i] = n;
	return (1);
}
