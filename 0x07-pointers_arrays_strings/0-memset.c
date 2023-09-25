#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s.
 * @s: a pointer to the memory area to be filled.
 * @n: number of the first bytes of memory area to be filled.
 * @b: The  constant byte to fill the memory with.
 *
 * Return: 0 for succes.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (0);
}
