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
	int i, j, m, l;

	m = strlen(needle);
	for (i = 0; haystack[i] >= '\0'; i++)
	{
		l = 0;
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] > '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					l++;
				if (l == m || l == m - 1)
					return (&haystack[i]);
			}
		}
	}

	return (NULL);
}
