#include "main.h"

int check_pal(char *s, int j, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if the string is a palindrome and zero otherwise.
 * @s: string to be checked.
 *
 * Return: 1 if string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string whose length  is to be calculated.
 *
 * Return: lenth of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters for the palindrime recursively.
 * @s: string to be checked.
 * @j: iterator.
 * @len: length of the string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_pal(char *s, int j, int len)
{
	if (j >= len)
	{
		return (1);
	}
	if (*(s + j) != *(s + len - 1))
	{
		return (0);
	}
	return (check_pal(s, j + 1, len - 1));
}
