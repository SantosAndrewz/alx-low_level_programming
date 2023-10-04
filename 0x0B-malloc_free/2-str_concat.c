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
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	char *a;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	x = i + j;
	a = malloc((sizeof(char) * x) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (y < x)
	{
		if (y <= i)
		{
			a[y] = s1[y];
		if (y >= i)
		{
			a[y] = s2[j];
			j++;
		}
		y++;
		}
	}
	a[y] = '\0';
	return (a);
}
