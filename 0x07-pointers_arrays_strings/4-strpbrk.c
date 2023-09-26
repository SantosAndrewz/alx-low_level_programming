#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes from accept string.
 * @s: string being searched.
 * @accept: source of bytes searched for.
 *
 * Return:
 * pointer to the byte in s that matches one of the bytes in accept.
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i, x;

for (i = 0; s[i] != '\0'; i++)
{
for (x = 0; accept[x] != '\0'; x++)
{
if (s[i] == accept[x])
return (s + 1);
}
}
return (NULL);
}
