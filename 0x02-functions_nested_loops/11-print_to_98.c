#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a newline
 * @n: number that is printed
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	for (a = n; a <= 98; a++)
	{
		printf("%d", a);
	}
	if (a < 98 && a != 98)
	{
		printf(", ");
	}
	else
	{
		printf("\n");
	}
}
