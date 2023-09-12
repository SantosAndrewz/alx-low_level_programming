#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower cae 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	for (count = 0; count < 10; count++)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
