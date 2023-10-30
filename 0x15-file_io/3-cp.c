#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define buffer 1024

/**
 * main - check the code
 * @ac: Arguments count
 * @av: Arguments values
 * Return: When succeed 0.
 */
int main(int ac, char **av)
{
	int file_from, fd_from, file_to, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], "r");
	if (file_from == -1)
	{
		dprintf(2, "Usage: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open (av[2], "w");
	if (file_to == -1)
	{
		dprintf(2, "Usage: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd_from = close(file_from);
	if (fd_from != 0)
	{
		dprintf(2, "Usage: Can't close fd %d\n", fd_from);
		exit(100);
	}
	fd_to = close(file_to);
	if (fd_to != 0)
	{
		dprintf(2, "Usage: Can't close fd %d\n", fd_to);
		exit(100);
	}
	printf("-> %i)\n", res);
	return (0);
}
