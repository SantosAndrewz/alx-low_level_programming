#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters passed to the function.
 * @...: variable number of parameters passed to the function to be summed up.
 *
 * Return: 0 if n == 0, otherwise the sum of all parameters passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
