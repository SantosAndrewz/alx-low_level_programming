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
int i = 0;
int sum = 0;
int dh1, dh2;
char pswd[84];

srand(time(0));

while (sum < 2772)
{
pswd[i] = 33 + rand() % 94;
sum += pswd[i++];
}
pswd[i] = '\0';
if (sum != 2772)
{
dh1 = (sum - 2772) / 2;
dh2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
dh1++;
for (i = 0; pswd[i]; i++)
{
if (pswd[i] >= (33 + dh1))
{
pswd[i] -= dh1;
break;
}
for (i = 0; pswd[i]; i++)
{
if (pswd[i] >= (33 + dh2))
{
pswd[i] -= dh2;
break;
}
}
}
printf("%s", pswd);
}
return (0);
}
