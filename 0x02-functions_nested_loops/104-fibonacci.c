#include <stdio.h>
/**
 * main - entry point to the program.
 * description: prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 for success
 */
int main(void)
{
unsigned long int i;
unsigned long int x = 1;
unsigned long int y = 2;
unsigned long int temp;

printf("%lu, %lu", 1, 2);
for (i = 2; i <= 98; i++)
{
temp = x + y;
x = y;
y = temp;
printf(", %lu", temp);
}
printf("\n");
return (0);
}
