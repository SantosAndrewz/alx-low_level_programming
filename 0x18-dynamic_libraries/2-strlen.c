#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string whose  length is returned.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
int len = 0;

while (*s++)
len++;
return (len);
}
