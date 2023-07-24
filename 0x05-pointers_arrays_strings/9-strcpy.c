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
	int i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
