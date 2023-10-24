#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of listint_t list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_n;

	for (tmp_n = head; head != NULL; head = tmp_n)
	{
		tmp_n = head->next
		free(head);
	}
}
