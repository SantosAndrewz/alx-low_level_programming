#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends text to an existing text, at the end of a file
 * @filename: name of the file to be appended.
 * @text_content: a NULL  terminated string to add at the end of the file.
 *
 * Return: 1 for success otherwise -1 for failure or filename NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fopr, fwr;
	int xch = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fopr = open(filename, O_WRONLY | O_APPEND);
	if (fopr == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[xch])
		{
			xch++;
		}
		fwr = write(fopr, text_content, xch);
		if (fwr == -1)
		{
			close(fopr);
			return (-1);
		}
	}
	close(fopr);
	return (1);
}
