#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a  memory block using malloc and free.
 * @ptr: pointer to previous memory location.
 * @old_size: size of the location for ptr.
 * @new_size: size of the new location.
 *
 * Return: a pointer to the new allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (a == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
		{
			return (NULL);
		}
		return (a);
	}
	a = malloc(new_size);
	if (a == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < old_size && x < new_size)
	{
		((char *)a)[x] = ((char *) ptr)[x];
		x++;
	}
	free(ptr);
	return (a);
}
