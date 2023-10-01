#include <stdio.h>
/**
 * main - entry point.
 * description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0 for success.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
