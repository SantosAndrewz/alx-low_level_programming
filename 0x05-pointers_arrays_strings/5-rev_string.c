#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
int i;
int x;
char temp;

for (i = 0; x = 0; s[x + 1] != '\0')
{
x++;
}
while (i < x)
{
temp = s[i];
s[i] = s[x];
s[x] = temp;
i++;
x++;
}
}
