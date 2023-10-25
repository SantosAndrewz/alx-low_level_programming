#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to the head of listint_t list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_n;

	if (head == NULL)
		return;
	for (tmp_n = *head; (*head) != NULL; (*head) = tmp_n)
	{
		tmp_n = (*head)->next;
		free(*head);
	}
}
