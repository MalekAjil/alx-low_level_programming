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

/**
 * _strcmp - compare two strings.
 * @s1: string
 * @s2: string
 * Return: the compare result
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	res = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res += s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (res);
}
