#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the input string
 *
 * Return: the pointer to the modified string.
 */
char *rot13(char *str)
{
int i;
int x;
char *str1 = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWQYZ"};
char *str2 = {"nopqrstuvwxyzabcdefghijklmABCDEFGHIJKLMNOPQRSTUVWQYZ"};

for (i = 0; str[i] != '\0'; i++)
{
for (x = 0; x < 52; x++)
{
if (str[i] == str1[x])
{
str[x] = str2[x];
break;
}
}
}
return (str);
}
