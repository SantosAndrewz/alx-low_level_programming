#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4.
 * _putchar: prints a single character.
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}