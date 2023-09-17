#include <stdio.h>
/**
 * main - entry point
 * description:  finds and prints the sum of the even-valued
 *
 * Return: 0 for success.
 */
int main(void)
{
int first = 1, second = 2, next = 0;
long int sum = 2;
while (next <= 4000000)
{
next = first + second;
first = second;
second = next;
if (next % 2 == 0)
sum += next;
}
printf("%ld\n", sum);
return (0);
}
