#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed.
 * _putchar: prints a single character.
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int len = 0;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;
while  (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
