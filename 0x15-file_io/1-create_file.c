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
	int fp;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		if (write(fp, text_content, len) != len)
			return (-1);
	}
	close(fp);
	return (1);
}
