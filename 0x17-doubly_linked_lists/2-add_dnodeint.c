#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - adds a new node at the beginning of the list dlistint.
 * @head: a double poiter to the hesd of the list.
 * @n: value that is to be inserted into the new node created.
 *
 * Return: address of the new element otherwise NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_x;

	node_x = malloc(sizeof(dlistint_t));
	if (node_x == NULL)
		return (NULL);
	node_x->n = n;
	node_x->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = node_x;
	}
	node_x->next = *head;
	(*head) = node_x;

	return (node_x);
}
