#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
int len = 0;
int i, x;
char temp;

while (s[len] != '\0')
len++;
for (i = 0; x = len - 1; i < x; i++, x--)
{
temp = s[i];
s[i] = s[x];
s[x] = temp;
}
}
