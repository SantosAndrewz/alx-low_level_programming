#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: point to the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_counter = 0;

	if (h == NULL)
		return (node_counter);

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		node_counter++;
	}
	return (node_counter);
}
