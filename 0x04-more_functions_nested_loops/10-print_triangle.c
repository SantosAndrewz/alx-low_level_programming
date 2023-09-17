#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 * _putchar: prints a single character.
 *
 * Return: void
 */
void print_triangle(int size)
{
int i, x;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (x = 0; x < size - i - 1; x++)
_putchar(' ');
for (x = 0; x < i + 1; x++)
_putchar('#');
_putchar('\n');
}
}
