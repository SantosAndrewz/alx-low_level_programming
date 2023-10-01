#include <stdio.h>
/**
 * main - entry point.
 * description: prints all possible different combinations of two digits.
 *
 * Return: 0 for success
 */
int main(void)
{
	int on;
	int tn;

	for (tn = '0'; tn <= '9'; tn++)
	{
		for (on = '0'; on <= '9'; on++)
		{
			if (!((on == tn) || (tn > on)))
			{
				putchar(tn);
				putchar(on);
				if (!(on == '9' && tn == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
