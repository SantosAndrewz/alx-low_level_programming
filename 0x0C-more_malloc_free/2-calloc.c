#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each elements in bytes.
 *
 * Return: A pointer to the allocated array, otherwise 0 on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{	int x, ts;
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL)
	}
	ts = nmemb * size;
	a = malloc(ts);
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ts; x++)
	{
		a[x] = 0;
	}
	return (a);
}
