#include "main.h"
#include <string.h>

/**
 * _strcat - returns the concatenation of two strings
 * @dest: destenation string
 * @src: source string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, n, m;

	n = strlen(src);
	m = strlen(dest);

	for (i = m; i <= n + m; i++)
	{
		dest[i] = src[i - m];
	}

	return (dest);
}
