#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * description: a program that prints the opcodes of its own main functions.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int num_of_bytes, x;
	char *a;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	a = (char *)main;
	for (x = 0; x < num_of_bytes; num_of_bytes++)
	{
		if (x == num_of_bytes -1)
		{
			printf("%02hhx\n", a[x]);
			break;
		}
		printf("%02hhx", a[x]);
	}
	return (0);
}
