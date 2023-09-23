#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the input string
 *
 * Return: the pointer to the modified string.
 */
char *rot13(char *str)
{
int i = 0;
int x;
char *str1 = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWQYZ"};
char *str2 = {"nopqrstuvwxyzabcdefghijklmABCDEFGHIJKLMNOPQRSTUVWQYZ"};

while (str[i] != '\n')
{
i++
}
for (x = 0; x < 52; x++)
{
if (str[i] == str[x])
{
str1[x] == str2[x];
break;
}
}
return (str);
}
