#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list.
 * @h: a pointer to the list's head.
 *
 * Return: number of nodes contained in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		x++;
	}
	return (x);
}
