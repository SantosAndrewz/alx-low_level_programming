#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: a pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prov;

	if (head == NULL)
		return;

	for (; head != NULL;)
	{
		prov = head;
		head = head->next;
		free(prov);
	}
}
