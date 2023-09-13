#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number from which the last digit is printed.
 * _putchar: prints a single character.
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n * -1;
	}
	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = (-last_digit) * -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
