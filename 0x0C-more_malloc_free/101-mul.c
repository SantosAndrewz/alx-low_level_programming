#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_digit(char *s);
int _strlen(char *s);
void errors(void);
int main(int argc, char *argv[]);

/**
 * is_digit - checks the string has only digits.
 * @s: string to be checked.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (!isdigit(s[x]))
		{
		return (0);
		}
	}
	return (1);
}
/**
 * _strlen - evaluates and returns length of the string.
 * @s: string to be evaluated.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int x, ln = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		ln++;
	}
	return (ln);
}
/**
 * errors - handles errors for main and exits program with error code.
 *
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - entry point.
 * description: multiplies two positive integers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	char *a1, *a2;
	int x, ln1, ln2, lnt, ex, num1, num2, *sf,  y = 0;

	a1 = argv[1], a2 = argv[2];
	if (argc != 3 || !is_digit(a1) || !is_digit(a2))
	{
		errors();
	}
	ln1 = _strlen(a1);
	ln2 = _strlen(a2);
	lnt = ln1 + ln2;
	sf = malloc(sizeof(int) * (lnt + 1));
	if (!sf)
	{
		return (1);
	}
	for (x = 0; x <= lnt; x++)
	{
		sf[x] = 0;
	}
	for (ln1 -= 1; ln1 >= 0; ln1--)
	{
		num1 = a1[ln1] - '0';
		ex = 0;

		for (ln2 -= 1; ln2 >= 0; ln2--)
		{
		num2 = a2[ln2] - '0';
		ex += sf[lnt + 1] + (num1 * num2);
		sf[lnt + 1] = ex % 10;
		ex /= 10;
		}
		if (ex > 0)
		{
			sf[ln1] += ex;
		}
	}
	for (x = 0; x < lnt; x++)
	{
		if (sf[x])
		{
			y = 1;
		}
		if (y)
		{
			_putchar(sf[x] + '0');
		}
	}
	if (!y)
	{
		_putchar('0');
	}
	_putchar('\n');

	free(sf);
	return (0);
}
