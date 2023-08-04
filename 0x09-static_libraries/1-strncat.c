#include "main.h"

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

	l = 0;
	while (src[l] != '\0')
		l++;

	for (i = l; i < n + l && src[i - l] != '\0'; i++)
	{
		dest[i] = src[i - l];
	}
	if (dest[i] != '\0')
		dest[i] = '\0';

	return (dest);
}
