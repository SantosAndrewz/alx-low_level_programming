#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n:  number of times the character '\' should be printed.
 * _putchar: prints a single character.
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, x;

if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
for (x = 0; x < i; x++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
