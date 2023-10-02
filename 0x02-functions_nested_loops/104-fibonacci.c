#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - entry point to the program.
 * description: prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 for success
 */
int main(void)
{
unsigned long int i;
unsigned long int x1 = 1;
unsigned long int x2 = 2;
unsigned long int y1 = 0;
unsigned long int y2 = 0;
unsigned long int temp1, temp2;

printf("%lu, %lu", x1, x2);
for (i = 2; i < 98; i++)
{
	if (x1 + x2 > LARGEST || y2 > 0 || y1 > 0)
	{
		temp1 = (x1 + x2) / LARGEST;
		temp2 = (x1 + x2) % LARGEST;
		y1 = y2 + temp1;
		y2 = temp2;
		x1 = x2;
		x2 = temp2;
		printf("%lu, %01lu", y1, y2);
	}
	else
	{
		temp2 = x1 + x2;
		x1 = x2;
		x2 = temp2;
		printf("%lu", x2);
	}
	if (i != 97)
	{
		printf(", ");
	}
}
printf("\n");
return (0);
}
