#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - releases memory allocated for list_t.
 * @head: head of list
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
			free(head);
		}
	}

}
