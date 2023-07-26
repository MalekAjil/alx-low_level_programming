#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: destenation string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: the cpied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i < j)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}
