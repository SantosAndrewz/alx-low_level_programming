#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strglen - returns the length of the string.
 * @a: string to be evaluated.
 *
 * Return: string length.
 */
unsigned int _strglen(char *a)
{
	unsigned int x = 0;

	while (a[x] != '\0')
		x++;
	return (x);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of list_t.
 * @str: value to be added to list_t.
 *
 * Return: address of the new element otherwise NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *added;

	if (str == NULL)
		return (NULL);
	added = malloc(sizsof(list_t));
	if (added == NULL)
		return (NULL);

	added->len = _strglen((char *)str);
	added->next = NULL;
	if (*head == NULL)
		*head = added;
		return (added);

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = added;
	return (added);
}
