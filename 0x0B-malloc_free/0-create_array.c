#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars.
 * @size: size of the array.
 * @c: chars to fill in the array.
 *
 * Return: a pointer to the filled array otherwise NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
