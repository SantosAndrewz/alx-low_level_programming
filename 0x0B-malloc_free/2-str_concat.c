#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concaatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a  poniter to the new concatenated string otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0, y = 0;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		a[x] = s1[x];
	}
	for (y = 0; y <= j; y++)
	{
		a[x] = s2[y];
		x++;
	}
	return (a);
}
