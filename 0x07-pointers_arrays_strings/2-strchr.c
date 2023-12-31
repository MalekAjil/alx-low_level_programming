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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
