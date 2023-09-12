#include <stdio.h>
/**
 * main - entry point
 * description: a program prints lowercase alphabet except q and e
 *
 * Return: 0 for success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		switch (c)
		{
			case 'e':
			case 'q':
			break;

			default:
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
