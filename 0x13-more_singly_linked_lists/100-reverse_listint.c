#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the head of listint _t list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;
	listint_t *present = *head;

	for (; present != NULL; present = next)
	{
		next = present->next;
		present->next = previous;
		previous = present;
	}
	*head = previous;

	return (*head);
}
