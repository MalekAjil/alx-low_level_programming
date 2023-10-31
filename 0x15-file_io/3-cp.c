#include "main.h"
#define BUFFER 1024

/**
 * open_files - open files
 * @av: files name
 * @fd: files descriptor
 * Return: void
 */
void open_files(char **av, int *fd)
{
	fd[0] = open(av[1], O_RDONLY);
	if (fd[0] == -1)
	{
		dprintf(2, "Usage: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd[1] = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (fd[1] == -1)
	{
		dprintf(2, "Usage: Can't write to %s\n", av[2]);
		exit(99);
	}
}
/**
 * close_files - close files
 * @fd: files descriptor
 * Return: void
 */
void close_files(int *fd)
{
	fd[2] = close(fd[0]);
	if (fd[2] == -1)
	{
		dprintf(2, "Usage: Can't close fd %d\n", fd[0]);
		exit(100);
	}
	fd[3] = close(fd[1]);
	if (fd[3] == -1)
	{
		dprintf(2, "Usage: Can't close fd %d\n", fd[1]);
		exit(100);
	}
}
/**
 * main - check the code
 * @ac: Arguments count
 * @av: Arguments values
 * Return: When succeed 0.
 */
int main(int ac, char **av)
{
	int fd[4];
	char str[BUFFER];
	ssize_t n;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_files(av, fd);
	while ((n = read(fd[0], str, BUFFER)) != 0)
	{
		if (n == -1)
		{
			dprintf(2, "Usage: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (write(fd[1], str, n) != n)
		{
			dprintf(2, "Usage: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close_files(fd);
	return (0);
}
