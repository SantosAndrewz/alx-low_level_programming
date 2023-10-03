#include <stdio.h>
/**
 * main - entry point.
 * description: prints all zrguments passed to main.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 for success,
 */
int main(argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
