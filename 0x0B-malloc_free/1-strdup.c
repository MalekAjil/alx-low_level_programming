#include <stdlib.h>
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

	size = 0;
	while (str[size] != '\0')
		size++;
	a = malloc(sizeof(*str) * size + 1);
	if (str == NULL || a == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
