#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, l;

	i = 0;
	while (haystack[i] != '\0')
	{
		l = 0;
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] == needle[j])
					l++;
				j++;
			}
			return (&haystack[i]);
		}
		i++;
	}

	return ('\0');
}
