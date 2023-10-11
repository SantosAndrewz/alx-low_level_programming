#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the struct dog.
 * @d: pointer to the struct dog to be printed.
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d-> = "(nil)";
	}
	if (d->owner == NULL)
	{
		d-> = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->name);
	printf("Owner: %s\n", d->owner);
}
