#include "main.h"

/**
 * _strcat - returns the concatenation of two strings
 * @dest: destenation string
 * @src: source string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, m;

	m = 0;
	while (dest[m] != '\0')
		m++;

	i = m;
	while (src[i - m] != '\0')
	{
		dest[i] = src[i - m];
		i++;
	}

	return (dest);
}
