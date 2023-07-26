#include "main.h"
#include <string.h>

/**
 * _strncat - returns the concatenation of two strings
 * @dest: destenation string
 * @src: source string
 * @n: number of bytes to be concatnated
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	l = strlen(dest);

	for (i = l; i < n + l && src[i - l] != '\n'; i++)
	{
		dest[i] = src[i - l];
	}
	dest[i] = '\0';

	return (dest);
}
