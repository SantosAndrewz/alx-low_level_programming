#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * _putchar: prints a single character
 *
 * Return: void
 */
void more_numbers(void)
{
int i, x;

for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
_putchar('0' + (x / 10));
_putchar('0' + (x % 10));
}
_putchar('\n');
}
}
