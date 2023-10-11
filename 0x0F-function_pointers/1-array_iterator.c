#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes  function as a parameter on each element of array
 *  @array: array of elements.
 * @size: number of elements to execute.
 * @action: a pointer to the function you need to use.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
