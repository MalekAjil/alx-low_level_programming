#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	FILE *fp_from, *fp_to;
	char ch;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = fopen(av[1], "r");
	if (fp_from == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fp_to = fopen(av[2], "w");
	if (fp_to == NULL)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	while((ch = fgetc(fp_from)) != EOF)
	{
		fputc(ch, fp_to);
	}
	if (fclose(fp_from))
	{
		dprintf(2, "Error: Can't close file %s\n", av[1]);
		exit(100);
	}
	if (fclose(fp_to))
	{
		dprintf(2, "Error: Can't close file %s\n", av[2]);
		exit(100);
	}
	return (0);
}
