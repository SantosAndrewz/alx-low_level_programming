#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array: array of elements.
 * @size: number of elements in the array.
 * @cmp: pointer to function
 *
 * Return: index of the first element otherwise -1 for no matcch and size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
