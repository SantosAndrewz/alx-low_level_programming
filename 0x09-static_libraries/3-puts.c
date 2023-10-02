#include "main.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: the string to be printed.
 * _putchar: prints a single character.
 *
 * Return: 0
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
