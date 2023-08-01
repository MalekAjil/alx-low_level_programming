#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n, m, l;

	l = 0;
	n = strlen(haystack);
	m = strlen(needle);

	for (i = 0; i < n; i++)
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < m && i + j < n; j++)
			{
				if (haystack[i + j] == needle[j])
					l++;
				if (l == m)
					return (&haystack[i]);
			}
		}

	return (NULL);
}
