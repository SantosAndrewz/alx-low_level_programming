#include <stdio.h>
/**
 * main - entry point.
 * description: prints all possible different combinations of three digits.
 *
 * Return: 0 for success.
 */
int main(void)
{
	int on;
	int tn;
	int hun;

	for (hun = '0'; hun <= '9'; hun++)
	{
		for (tn = '0'; tn <= '9'; tn++)
		{
			for (on = '0'; on <= '9'; on++)
			{
				if (!((on == tn) || (tn == hun) || (tn > on) ||
					(hun > tn)))
				{
					putchar(hun);
					putchar(tn);
					putchar(on);
					if (!(on == '9' && tn == '8' &&
						hun == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
