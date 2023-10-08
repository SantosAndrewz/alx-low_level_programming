#include <stdio.h>
#include  <stdlib.h>
/**
 * main - entry point.
 * description: adds positive integers, followed by a newline.
 * @argc: argument count.
 * @argv: argumnet victor.
 *
 * Return: 0 for success otherwise 1 for errors.
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	x = 1;
	while (x < argc)
	{
		for  (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
