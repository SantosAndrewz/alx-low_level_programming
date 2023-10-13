#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * @...: varable number of arguments to be passed to the function.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *s_all, *sp = "";
	int x = 0;

	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sp, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(all, double));
					break;
				case 's':
					s_all = va_arg(all, char *);
					if (!s_all)
						s_all = "(nil)";
					printf("%s%s", sp, s_all);
					break;
				default:
					x++;
					continue;
			}
			sp = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(all);
}
