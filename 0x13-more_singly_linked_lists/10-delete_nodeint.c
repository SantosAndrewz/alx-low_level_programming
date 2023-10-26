#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of the list.
 * @head: double pointer to the head of the listint_t list.
 * @index: index of the node that is going to be deleted.
 *
 * Return: 1 for success, otherwise -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_n, *present = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp_n = *head;
		*head = tmp_n->next;
		free(tmp_n);
		return (1);
	}
	tmp_n = *head;
	for (x = 0; x < index - 1; x++)
	{
		if ((tmp_n == NULL) || (tmp_n->next == NULL))
		{
			return (-1);
		}
		tmp_n = tmp_n->next;
	}
	present = tmp_n->next;
	tmp_n->next = present->next;
	free(present);
	return (1);
}
