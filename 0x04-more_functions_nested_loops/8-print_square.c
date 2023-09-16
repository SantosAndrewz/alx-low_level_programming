#include "main.h"
/**
 * print_square - prints a square, followed by a new line,
 * @size: the size of the square.
 * _putchar: prints a single character.
 *
 * Return: void
 */
void print_square(int size)
{
int i, x;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
