#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUFFER 1024

/**
 * main - check the code
 * @ac: Arguments count
 * @av: Arguments values
 * Return: When succeed 0.
 */
int main(int ac, char **av)
{
	int file_from, fd_from, file_to, fd_to;
	char str[BUFFER];
	ssize_t n;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Usage: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Usage: Can't write to %s\n", av[2]);
		exit(99);
	}
	n = read(file_from, str, BUFFER);
        if (n == -1)
        {
		dprintf(2, "Usage: Can't read from file %s\n", av[1]);
		exit(98);
        }
	if (write(file_to, str, n) != n)
	{
		dprintf(2, "Usage: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd_from = close(file_from);
	if (fd_from == -1)
	{
		dprintf(2, "Usage: Can't close fd %d\n", file_from);
		exit(100);
	}
	fd_to = close(file_to);
	if (fd_to == -1)
	{
		dprintf(2, "Usage: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
