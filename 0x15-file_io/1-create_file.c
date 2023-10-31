#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - a function that creates a file.
 * @filename: name of the file to be created by the function.
 * @text_content: NULL terminated string to be written into the file created.
 *
 * Return: 1 for success otherwise -1 for failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fopr, fwr, xch;

	if (filename == NULL)
	{
		return (-1);
	}
	fopr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fopr == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[xch] != '\0')
	{
		xch++;
	}
	fwr = write(fopr, text_content, xch);
	if (fwr == -1)
	{
		return (-1);
	}
	close(fopr);
	return (1);
}
