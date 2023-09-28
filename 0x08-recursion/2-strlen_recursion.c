#include "main.h"
/**
 * _strlen_recursion - returns the length of a astring.
 * @s: pointer to the string whose lenth is to be determined.
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;
if (*s)
{
	len++;
	len = len + _strlen_recursion(s + 1);
}
return (len);
}
