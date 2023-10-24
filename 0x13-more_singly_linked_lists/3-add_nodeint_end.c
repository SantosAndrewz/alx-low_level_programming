#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the listint_t list.
 * @n: value to be stored in the new node created.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *novel;
	listint_t *tmp_n;

	novel = malloc(sizeof(listint_t));
	if (novel == NULL)
	{
		return (NULL);
	}
	else
	{
		novel->n = n;
		novel->next = NULL;
	}

	if (*head == NULL)
	{
		*head = novel;
		return (novel);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = novel;
	}
	return (novel);
}
