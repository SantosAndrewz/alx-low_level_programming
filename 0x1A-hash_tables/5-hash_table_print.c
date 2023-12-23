#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash  table.
 * Description: The key/value pairs are printed in their hash table order.
 * @ht: pointer to the hash table to be printed.
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int x = 0;
	unsigned char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (x < ht->size)
	{
		if (ht->array[x] != NULL)
		{
			if (flag == 1)
				printf(", ");
			n = ht->array[x];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			flag = 1;
		}
		x++;
	}
	printf("}\n");
}
