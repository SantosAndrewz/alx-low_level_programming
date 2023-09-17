#include <stdio.h>
/**
 * main - entry point
 * description: finds and prints the largest prime factor of the number.
 *
 * Return: 0 for success
 */
int main(void)
{
long int x = 612852475143;
long int i;

for (i = 2; i <= x; i++)
{
while (x % i == 0 && x != i)
x = x / i;
}
printf("%ld\n", x);
return (0);
}
