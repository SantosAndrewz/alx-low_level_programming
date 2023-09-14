#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: represents the character that is checked.
 *
 * Return: 1 if c is a digit and otherwise.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
