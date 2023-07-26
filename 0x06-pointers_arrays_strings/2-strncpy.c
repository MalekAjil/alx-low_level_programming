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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			break;
	}

	return (dest);
}
