#include "main.h"
#include <stdio.h>

int _sqrt(int n, int j);

/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * @n: the number whose square root is to be calculated.
 *
 * Return: the value of the natural square root of a number.
 */
int _sqrt_recursion(int n);
{
	return (_sqrt(n, 1));
}
/**
 * sqrt_recursion - calculates the natural square root of a number.
 * @n: the number whose square root is to be calculated.
 * @j: iterator
 *
 * Return: the value of the natural square root of a number.
 */
int _sqrt(int n, int j)
{
	int sqrt = j * j;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (j);
	}
	return (_sqrt(n, j + 1));
}
