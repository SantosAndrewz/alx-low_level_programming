#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: array of argument strings.
 *
 * Return: a pointer to the concatenated string otherwise NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, y = 0;
	char *a;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0;  i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			x++;
		}
		x++;
	}
	a = malloc(sizeof(char) * (x + 1));
	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[y++] = av[i][j];
		}
		if (i < ac - 1)
		{
			a[y++] = '\n';
		}
	}
	a[y] = '\0';
	return (a);
}
