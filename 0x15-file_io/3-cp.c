#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_S 1024

/**
 * error_handle - prints error on the standard error and exits with a code.
 * @code: code returned on exit of the function.
 * @msg: error mesage sent to standard error for printing.
 */
void error_handle(int code, const char  *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);

	switch (code)
	{
		case 97:
			exit(97);
		case 98:
			exit(98);
		case 99:
			exit(99);
		case 100:
			exit(100);
		default:
			exit(1);
	}
}
/**
 * main - entry point.
 * @argc: number arguments.
 * @argv: argument vector.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	char buf[BUFFER_S];
	int from_f, to_f;
	ssize_t read_txt, written_txt;

	if (argc != 3)
		error_handle(97, "Usage: cp file_from file_to");

	from_f = open(argv[1], O_RDONLY);
	if (from_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", from_f);
		error_handle(98, "Error: Can't read from file from_f");
	}
	to_f = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (to_f == -1)
		error_handle(99, "Error: Can't read from file to_f");
	for (;;)
	{
		read_txt = read(from_f, buf, BUFFER_S);
		if (read_txt == 0)
			break;
		if (read_txt == -1)
			error_handle(98, "Error: Can't read from file from_f");
		written_txt = write(to_f, buf, read_txt);
		if (written_txt != read_txt)
			error_handle(99, "Error: Can't write to file to_f");
	}
	if (close(from_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", from_f);
		error_handle(100, "Error: Can't close file from_f");
	}
	if (close(to_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", to_f);
		error_handle(100, "Error: Can't close file to_f");
	}
	return (0);
}
