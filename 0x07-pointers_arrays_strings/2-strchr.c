#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: string pointer
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i, n;

	i = 0;
	n = strlen(s);
	while (i < n && str[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
