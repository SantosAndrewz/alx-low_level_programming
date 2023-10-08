#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: prints the minimum number of coins for a given amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 for success otherwise 1 for errors.
 */
int main(int argc, char *argv[])
{
	int cents, i, num_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	num_coins = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
