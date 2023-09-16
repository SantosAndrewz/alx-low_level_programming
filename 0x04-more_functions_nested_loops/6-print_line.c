#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * _putchar: prints a single character.
 *
 * @n: number of times character '_' is to be printed
 *
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
