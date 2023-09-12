#include <stdio.i>
/**
 * main - entry point
 * description: program prints single numbers of base 10 using putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		if (i == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
