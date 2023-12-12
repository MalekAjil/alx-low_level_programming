#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: bytes of the memory area pointed to by s with the constant byte b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i++] = b;
	}
	return (s);
}

/**
 * _memcpy - copies memory area
 * @dest: destenation address
 * @src: source address
 * @n: number of bytes to be copies
 *
 * Return: a pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

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

