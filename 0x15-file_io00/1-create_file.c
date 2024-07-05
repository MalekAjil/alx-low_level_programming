#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "wb");
	if (fp == NULL)
		return (-1);
	if (text_content != NULL)
		fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}