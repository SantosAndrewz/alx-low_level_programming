#include "main.h"
/**
 * factorial - returns the factorial of a given number, n.
 * returns the factorial of a given number.
 * @n: the number whose factorial is to be calculated.
 *
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
