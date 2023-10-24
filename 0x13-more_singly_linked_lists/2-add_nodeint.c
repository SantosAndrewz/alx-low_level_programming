#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the head of the listint_t list.
 * @n: value to be stored in the new node formed.
 *
 * Return: address of the new elements, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *novel;

	novel = malloc(sizeof(listint_t));
	if (novel == NULL)
	{
		return (NULL);
	}
	else
	{
		novel->n = n;
		novel->next = *head;
		*head = novel;
	}
	return (novel);
}
