#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads the text file and prints it standard output.
 * @filename: name of the file to be read.
 * @letters: number of letters to be read and printed.
 * Return: Actual number of letters it could read and print.
 * 0 if file can not be opened or read.
 * 0 also if the file is NULL
 * 0 if write fails or writes unexpected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fopr;
	ssize_t frt, fwt;
	char *fopt;

	if (filename == NULL)
	{
		return (0);
	}
	fopr = open(filename, O_RDONLY);
	if (fopr == -1)
	{
		return (0);
	}
	fopt = malloc(sizeof(char) * (letters));
	if (fopt == NULL)
	{
		close(fopr);
		return (0);
	}
	frt = read(fopr, fopt, letters);
	if (frt == -1)
	{
		close(fopr);
		free(fopt);
		return (0);
	}
	fwt = write(STDOUT_FILENO, fopt, frt);
	if (fwt == -1 || fwt != frt)
	{
		close(fopr);
		free(fopt);
		return (0);
	}
	close(fopr);
	free(fopt);

	return (fwt);
}
