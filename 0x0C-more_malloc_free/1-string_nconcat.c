#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: maximum number of chars on from s2 to be concatenated.
 *
 * Return: a pointer to the new string otherwise NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, l = 0, i, j;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x]; x++)
	{
		l++;
	}
	for (y = 0; s2[y] && y < n; y++)
	{
		l++;
	}
	a = malloc(sizeof(char) * (l + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';
	return (a);
}
