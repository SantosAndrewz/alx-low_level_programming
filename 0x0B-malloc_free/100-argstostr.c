#include "main.h"
#include <stdio.h>
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
	int i = 0, j = 0, x = 0, y = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			x++;
			j++;
		}
		j = 0;
		i++;
	}
	a = malloc((sizeof(char) * x) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			a[y] = av[i][j];
			y++;
			j++;
		}
		a[y] = '\n';

	}
	y++;
	a[y] = '\0';
	return (a);
}
