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
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->name ? d->age : -1.0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
