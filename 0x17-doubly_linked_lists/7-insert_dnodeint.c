#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position in list.
 * @h: a pointer to the head of the dlistint_t list.
 * @idx: an index where the new node shall be added.
 * @n: the value that shall be inserted into the new node.
 *
 * Return: the address of the new node, otherwise NULL for failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int node_count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	current = *h;
	while (current != NULL)
	{
		if (node_count == (idx - 1))
		{
			if (current->next == NULL)
			{
				free(new_node);
				return (add_dnodeint_end(h, n));
			}

			new_node->next = current->next;
			new_node->prev = current;
			current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		node_count++;
	}
	free(new_node);
	return (NULL);
}
