#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t n = 0;
	char c;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while (n < letters && (c = fgetc(fp)) != EOF)
	{
		if (_putchar(c) != 1)
			return (0);
		n++;
	}
	fclose(fp);
	return ((ssize_t)n);
}
