#include "lists.h"
/**
 * dlistint_len - returns number of elements in linked dlistint_t list.
 * @h: a pointer to the head of the list.
 *
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_counter = 0;

	for (; h != NULL; h = h->next)
	{
		node_counter++;
	}
	return (node_counter);
}
