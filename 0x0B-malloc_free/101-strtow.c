#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - calculates the lenght of a word within a string.
 * @str: input string.
 *
 * Return: the lenght of the word
 */
int word_len(char *str)
{
	int len = 0;

	while (*str != '\0' && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * count_words - counts the number of words in a string.
 * @str: the string whose words to be counted.
 *
 * Return: number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			word = 0;
		}
		else if (!word)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - splits a string into words.
 * @str: string to be searched.
 *
 * Return: a pointer to an array of words otherwise NULL
 */
char **strtow(char *str)
{
	int i = 0, w, ws, l, ls;
	char **a;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	ws = count_words(str);
	if (ws == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char *) * (ws + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < ws; w++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		ls = word_len(str + i);
		a[w] = malloc(sizeof(char) * (ls + 1));
		if (a[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(a[w]);
			}
			free(a);
			return (NULL);
		}
		for (l = 0; l < ls; l++)
		{
			a[w][l] = str[i++];
		}
		a[w][l] = '\0';

	}
	a[ws] = NULL;
	return (a);
}
