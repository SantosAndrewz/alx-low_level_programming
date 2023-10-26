#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head of the list
 * @idx: index for adding a new node.
 * @n: value to be store in the new node.
 *
 * Return: address of the new node or NULL when it fails:
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *novel, *present;
	unsigned int x = 0;

	novel = malloc(sizeof(listint_t));
	if (!novel)
	{
		return (NULL);
	}
	novel->n = n;
	novel->next = NULL;

	if (idx == 0)
	{
	novel->next = *head;
	*head = novel;
	return (novel);
	}
	present = *head;
	while (present && x < idx - 1)
	{
		present = present->next;
		x++;
	}
	if (!present)
	{
		free(novel);
		return (NULL);
	}
	novel->next = present->next;
	present->next = novel;
	return (novel);
}
