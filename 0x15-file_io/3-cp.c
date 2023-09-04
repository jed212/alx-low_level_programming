#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * error - function that prints error to stdout in case file read fails.
 * @filename: Address of the file.
 * @exit_n: Exit status.
 */
void error(char *filename, int exit_n)
{
	if (exit_n == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	if (exit_n == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(exit_n);
}

/**
 * close_error - function that prints error to stdout in case file close fails.
 * @fd: the file descriptor.
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
	exit(100);
}

/**
 * main - function that copies content from file1 to file2.
 * @ac: the number of arguments,
 * @av: an array of arguments.
 * Return: 1 on success.
 */
int main(int ac, char *av[])
{
	char *buff[BUFFSIZE];
	int fd_to, fd_from, bytes_check, n;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		error(av[1], 98);
	}
	fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		error(av[2], 99);
	}
	n = BUFSIZE;
	while (n > 0)
	{
		n = read(fd_from, buf, BUFSIZE);
		if (n == -1)
			error(av[1], 98);
		bytes_check = write(fd_to, buf, n);
		if (bytes_check != n)
			error(av[2], 99);
	}
	if (close(fd_from) == -1)
		close_error(fd_from);
	if (close(fd_to) == -1)
		close_error(fd_to);
	return (0);
}
