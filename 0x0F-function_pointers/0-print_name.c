#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a string name.
 * @name: the string to be printed.
 * @f: pointer to function that prints a climic.
 * Description: Function prints the name using a pointer to function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
