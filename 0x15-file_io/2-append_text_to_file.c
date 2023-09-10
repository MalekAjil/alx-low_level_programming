#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: the file name
 * @text_content: the content
 * Return: return 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w");
	if (fp == NULL)
		return (-1);
	if (text_content != NULL)
		fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
