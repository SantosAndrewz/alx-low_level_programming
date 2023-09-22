#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: string to be copied to.
 * @src: string to be copied from.
 * @n: number of characters to be copied from src.
 *
 * Return: pointer to dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int x = 0;

while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return;
}
