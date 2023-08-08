#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenate two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: the pointer of the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, size;
	char *a;

	if (s1 == NULL && s2 == NULL)
		return ('\0');

	size = 0;
	while (s1 != NULL && s1[size] != '\0')
		size++;
	i = 0;
	while (s2 != NULL && s2[i] != '\0')
		i++;
	a = malloc(sizeof(*a) * (size + i + 1));
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	size = 0;
	while (s2 != NULL && s2[size] != '\0')
	{
		a[i] = s2[size];
		size++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
