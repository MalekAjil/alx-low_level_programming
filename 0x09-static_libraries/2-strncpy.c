#include "main.h"

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

	i = 0;
	while (src[i] < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (dest);
}
