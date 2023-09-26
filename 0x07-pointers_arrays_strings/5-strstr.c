#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates occurrence of the substring needle in the string haystack.
 * @haystack: string searched.
 * @needle: substring searched for.
 *
 * Return:
 * pointer to the beginning of the located substring.
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

for (; haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (NULL);
}
