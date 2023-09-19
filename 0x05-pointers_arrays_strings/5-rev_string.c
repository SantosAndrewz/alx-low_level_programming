#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int x = 0;
char temp;

for (s[x + 1] != '\0';)
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
