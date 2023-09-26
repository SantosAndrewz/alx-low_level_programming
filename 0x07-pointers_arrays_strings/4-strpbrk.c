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
int x;

while (*s)
{
for (x = 0; accept[x] != '\0'; x++)
{
if (*s == accept[x])
return (s);
}
s++;
}
return (NULL);
}
