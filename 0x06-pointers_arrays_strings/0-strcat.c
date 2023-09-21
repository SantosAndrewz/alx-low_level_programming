#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: string to be appended to.
 * @src: string to be appended to the dest string.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int x = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[x] != '\0')
{
dest[i] = src[x];
i++;
x++;
}
dest[i] = '\0';
return (dest);
}
