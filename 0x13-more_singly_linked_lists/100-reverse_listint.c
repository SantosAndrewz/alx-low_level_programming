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

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
