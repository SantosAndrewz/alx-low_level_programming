#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: a pointer to the allocated array, 0 otherwise
 */
int **alloc_grid(int width, int height)
{
	int i, j, x, y;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] == malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			return (NULL);
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}
	return (a);
}
