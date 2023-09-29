#include "main.h"
#include <stdio.h>

int check_prime(int n, int j);

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: integer to be checked.
 *
 * Return: 1 if input number is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks whether the input integer is a prime number.
 * @n: integer to be checked.
 * @j: iterator
 * Return: 1 if input number is a prime number, 0 otherwise.
 */
int check_prime(int n, int j)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % j == 0 && j > 1)
	{
		return (0);
	}
	if ((n / j) < j)
	{
		return (1);
	}
	return (check_prime(n, j + 1));
}
