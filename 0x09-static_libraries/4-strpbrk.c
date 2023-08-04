#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the substring
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, n, m;

	n = strlen(s);
	m = strlen(accept);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}

	return (NULL);
}
