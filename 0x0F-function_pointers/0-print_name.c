#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a string name.
 * @name: the string to be printed.
 * @f: pointer to function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char))
{
	while (*name)
	{
		_putchar(*name);
		name++
	}
}
