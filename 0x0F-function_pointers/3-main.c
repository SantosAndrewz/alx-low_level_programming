#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - prints results for operations done.
 * @argc: argument count.
 * @argv: argument vector
 *
 * Return: 0 for success.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int digit1, digit2;
	char *ac;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	digit1 = atoi(argv[1]);
	ac =  argv[2];
	digit2 = atoi(argv[3]);

	if (get_op_func(ac) == NULL || ac[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ac == '/' && digit2 == 0) || (*ac == '%' && digit2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ac)(digit1, digit2));
	return (0);
}
