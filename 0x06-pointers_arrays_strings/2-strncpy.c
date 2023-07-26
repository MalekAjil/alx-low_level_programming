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

	j = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0')
	{
		while (i != j)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
