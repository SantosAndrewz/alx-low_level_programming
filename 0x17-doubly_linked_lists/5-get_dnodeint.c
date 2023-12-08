#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer to the head of the dlistint_t list.
 * @index: the index of the node, starting from 0.
 *
 * Return: a pointer to the nth node, otherwise a NULL if node is non-existent.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_counter = 0;

	if (head == NULL)
		return (NULL);
	for (; head != NULL && node_counter < index; node_counter++)
	{
		head = head->next;
	}
	return (node_counter == index) ? head : NULL;
}
