#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - measures and returns length of the string.
 * @s: string to be measured.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * _strcpy - copies string.
 * @dest: pointer to the buffer into which the string is copied.
 * @src: string to be copied.
 *
 * Return: a pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x, ln;

	ln = 0;
	while (src[ln] != '\0')
	{
		ln++;
	}
	x = 0;
	while (x < ln)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/***
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: a pointer to new dog for success, NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln1, ln2;

	ln1 = _strlen(name);
	ln2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(ln1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(ln2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
