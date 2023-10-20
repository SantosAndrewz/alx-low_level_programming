#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list's head
 *
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; i != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
