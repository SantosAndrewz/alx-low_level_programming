#include "main.h"
#include <stdlib.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: the interger for which computation is done.
 *
 * Return: the absolute value of n.
 */
int _abs(int n)
{
	if (n == -2147483648)
	{
	return (2147483647);
	}
	else if (n < 0)
	{
	return (-n);
	}
	else
	{
	return (n);
	}
}

