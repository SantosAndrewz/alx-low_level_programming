#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * _putchar: prints single characters.
 *
 * Return: void
 */
void times_table(void)
	int q, p, r, x, u;

	for (q = 0; q <= 9; q++)
	{
	for (p = 0; p <= 9; p++)
	{
	r = q * p;
	if (r > 9)
	{
	x = r % 10;
	u = (r - x) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(u + '0');
	_putchar(x + '0');
	}
	else
	{
	if (p != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(r + '0');
	}
	}
	_putchar('\n');
	}
}
