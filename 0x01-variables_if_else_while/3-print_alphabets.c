#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints the lowercase alphabet then uppercase
 *
 * Return: 0 for success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
putchar('\n');

	return (0);
}
