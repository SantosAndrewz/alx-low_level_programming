#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value of the array.
 * @max: maximum value of the array.
 *
 * Return: a pointer to the new array otherwiseNULL on failure.
 */
int *array_range(int min, int max)
{
	int *a;
	int s, i;

	if (min > max)
	{
		return (NULL);
	}
	s = (max - min) + 1;
	a = malloc(sizeof(int) * s);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
