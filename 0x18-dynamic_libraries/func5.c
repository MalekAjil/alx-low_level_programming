#include "main.h"

/**
 * _strspn -  returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: the string
 * @accept: the substring
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int l;

	l = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				l++;
			if (s[i] == ' ' && l > 0)
				return (l);
			j++;
		}
		i++;
	}

	return (l);
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the substring
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}

	return ('\0');
}

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
