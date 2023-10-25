include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of listint_t list.
 * @head: a pointer to the head of the list.
 *
 * Return: sum of all data (n) of the list.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL);
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
