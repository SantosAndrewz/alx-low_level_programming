#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * description: program generates random passwords for the program 101-crackme.
 *
 * Return: 0 for succes
 */
int main(void)
{
int i;
int n;
int sum = 0;
int pswd[100];

srand(time('\0'));

for (i = 0; i < 100; i++)
{
pswd[i] = rand() % 78;
sum += pswd[i];
putchar(pswd[i] + '0');
if ((2772 - sum) < 78)
{
n = 2772 - sum;
sum += n;
putchar(n + '0');
break;
}
}
putchar('\n');
return (0);
}
