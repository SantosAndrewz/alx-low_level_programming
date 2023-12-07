#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node to the end of a dlistint_t list.
 * @head: a double pointer to the head of the linked list.
 * @n: value is to be added into the new node.
 *
 * Return: address of the new list otherwise NULL o failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_x;
	dlistint_t *prov = *head;

	node_x = malloc(sizeof(dlistint_t));
	if (node_x == NULL)
		return (NULL);
	node_x->n = n;
	node_x->next = NULL;

	if (*head == NULL)
	{
		node_x->prev = NULL;
		*head = node_x;
		return (node_x);
	}
	for (; prov->next != NULL; prov = prov->next)
	{
		;
	}
	prov->next = node_x;
	node_x->prev = prov;

	return (node_x);
}
