#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  _strglen - returns the length of a string.
 *  @a: pointer to the string to be evaluated.
 *
 *  Return: Length of the string.
 */
_strglen(const char *a)
{
	int x = 0;

	while (a[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list_t list.
 * @str: value to be inserted into element.
 * Return: address of the new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;

	added_node = malloc(sizeof(list_t));
	{
		if (added_node == NULL)
		{
			return (NULL);
		}
	added_node->str = strdup(str);
	added_node->len = _strglen(str);
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}
