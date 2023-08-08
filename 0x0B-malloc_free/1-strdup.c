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
	unsigned int i;
	char *a;

	a = malloc(*str);
	i = 0;
	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
