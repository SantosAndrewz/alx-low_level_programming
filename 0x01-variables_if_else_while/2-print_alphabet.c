#include <stdio.h>
/**
 * main - entry point into the program
 * description: a program that prints the alphabet in lowercase
 *
 * Return: 0 implying success
 */
int main(void)
{
	char c;

	c = "a";

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
