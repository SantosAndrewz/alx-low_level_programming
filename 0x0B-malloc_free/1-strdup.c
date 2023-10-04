#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate string str.
 * @str: string to be duplicated.
 *
 * Return: a pointer to the duplicated string otherwise NULL
 */
char *_strdup(char *str)
{
	int i = 1;
	int j = 0;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	a = malloc((sizeof(char) * i) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		a[j] = str[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
