#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 *  which is a duplicate of the string str.
 *  Memory for the new string is obtained with malloc,
 *  and can be freed with free.
 * @str: the string.
 * Return: the pointer of the array.
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *a;

	if (str != NULL)
	{
		size = 0;
		while (str[size] != '\0')
			size++;
		a = malloc(size * sizeof(char));
		for (i = 0; i <= size; i++)
			a[i] = str[i];
		return (a);
	}
	return (NULL);
}
