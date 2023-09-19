#include "main.h"
/**
 * puts2 -  prints every other character of a string, starting with the first.
 * @str: the string to be printed.
 * _putchar: prints a single character.
 *
 * Return: void
 */
void puts2(char *str)
{
int len = 0;
int x = 0;
char *y = str;
int i;

while (*y != '0')
{
y++;
len++;
}
x = len - 1;
for (i = 0; i <= x; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
