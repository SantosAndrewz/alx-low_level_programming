#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 * @str: input string
 *
 * Return: pointer to modified string
 */
char *leet(char *str)
{
char str1[] = "aeotlAEOTL";
char str2[] = "4307143071";
int i = 0;
int x;

while (str[i] != '\0')
{
for (x = 0; x <= 9; x++)
{
if (str[i] == str1[x])
{
str[i] = str2[x];
}
}
i++;
}
return (str);
}
