#include "main.h"
/**
 * reverse_array - reverses an array'
 * @a: name of array.
 * @n: number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0, temp = 0;

while (i < n)
{
n--;
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
}
}
