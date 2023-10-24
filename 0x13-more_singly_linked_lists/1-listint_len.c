#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list.
 * @h: a pointer to listint_t's head.
 *
 * Return: number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; h = h->next)
	{
		x++;
	}
	return (x);
}
