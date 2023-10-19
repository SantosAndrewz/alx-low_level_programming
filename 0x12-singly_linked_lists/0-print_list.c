#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list's head.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			print("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
