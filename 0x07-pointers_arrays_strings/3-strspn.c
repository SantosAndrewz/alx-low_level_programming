#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched'
 * @accept: string with accepted characters.
 *
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0;
int i;

while (*s != '\0')
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
x++;
break;
}
else if (accept[i] == '\0')
{
break;
}
}
s++;
}
return(x);
}
