#include "main.h"
/**
 * _pow_recursion - calculates the value of x raised to power of y.
 * @x: the base to be powered.
 * @y: the exponent
 *
 * Return:
 * -1 if y is lower than zero.
 *  the value of x raised to the power of y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
