#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
**
 * free_list - releases memory allocated for list_t.
 * @head: head of list
 *
 * Return: void.
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(haed->next);
		if (head->str)
		{
			free(head->str);
			free(head);
	}

}
