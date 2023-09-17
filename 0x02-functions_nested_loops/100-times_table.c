#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number of times the table is printed.
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, x, p;

if (i < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (x = 0; x <= n; x++)
{
p = i * x;
if (x == 0)
{
printf("%d", p);
}
else
{
printf(", ");
if (p < 10)
{
printf(",   %d", p);
}
else if (p < 100)
{
printf(",  %d", p);
}
else
{
printf(", %d", p);
}
}
}
printf("\n");
}
}
