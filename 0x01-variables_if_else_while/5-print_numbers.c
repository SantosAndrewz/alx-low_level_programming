#include <stdio.h>
/**
 * main - entry point
 * description: program that prints all single digit numbers in base 10 from 0
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
