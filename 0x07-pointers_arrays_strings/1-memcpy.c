#include "main.h"

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
