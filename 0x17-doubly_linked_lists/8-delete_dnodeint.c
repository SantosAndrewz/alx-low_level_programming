#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_dnodeint_at_index - deletes the node at a given index in the list.
 * @head: a double pointer to the head of the dlistint_t list.
 * @index: an index of the node that is to be deleted.
 *
 * Return: 1 for success, otherwise -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd1;
	dlistint_t *hd2;
	unsigned int x;

	hd1 = *head;

	for (x = 0; hd1 != NULL; x++, hd1 = hd1->next)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = hd1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd2->next = hd1->next;
				if (hd1->next != NULL)
					hd1->next->prev = hd2;
			}
			free(hd1);
			return (1);
		}
		hd2 = hd1;
	}
	return (-1);
}
