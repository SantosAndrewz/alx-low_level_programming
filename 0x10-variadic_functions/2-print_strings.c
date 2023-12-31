#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed.
 * @n: number of strings passed to the function.
 * @...: variable number of strings to be passed to the function and printed.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *a;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(str, char *);

		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
