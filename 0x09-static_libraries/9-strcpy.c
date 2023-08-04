#include "main.h"

/**
 * _strcpy - copy string from src to dest
 * @dest: the destenation string
 * @src: the source string
 * Return: destenation string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] !='\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
