#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list.
 * @head: a pointer to the head of dlistint_t list.
 * Return: sum of all the data (n) in the linked list else 0 for empty list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	if (head == NULL)
		return (0);
	for(; head != NULL; head = head->next)
	{
		sum_data = sum_data + head->n;
	}
	return (sum_data);
}
