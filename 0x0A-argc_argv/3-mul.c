#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point.
 * description: program multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return:
 * 0 for success
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int x1 = 0;
	int x2 = 0;

	if (argc == 3)
	{
		x1 = atoi(argv[1]);
		x2 = atoi(argv[2]);
		printf("%d\n", x1 * x2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
