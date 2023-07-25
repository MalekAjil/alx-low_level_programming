#include "main.h"
#include<string.h>

/**
 * _strcpy - copy string from src to dest
 * @dest: the destenation string
 * @src: the source string
 * Return: destenation string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = strlen(src);
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
