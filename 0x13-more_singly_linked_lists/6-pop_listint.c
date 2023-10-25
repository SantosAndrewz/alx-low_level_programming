#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list and returns its data
 * @head: double pointer to the head of the list.
 *
 * Return: data,n, of the deleted headnode or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int  d;
	listint_t *tmp_n;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		d = (*head)->n;
		tmp_n = (*head)->next;
		free(*head);
		(*head) = temp;
	}
	return (d);
}
