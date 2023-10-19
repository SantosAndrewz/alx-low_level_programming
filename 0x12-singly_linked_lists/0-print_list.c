#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list's head.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
	}
	return (i);
}
