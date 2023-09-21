#include "main.h"
/**
 * _strncat - concatenates two strings, adding at most n characters from src.
 * @dest: string to onto which will be added.
 * @src: string that from which bytes will be added to dest string.
 * @n: number of characters to be added to dest string.
 *
 * Return: pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int x = 0;

while (dest[i] != '\0')
{
i++;
}
for (x < n && src[x] != '\0')
{
dest[i] = src[x];
i++;
x++;
}
dest[i] = '\0';
return (dest);
}
