#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: the strig.
 * Return: Concatenated string of arguments values.
 */
char **strtow(char *str)
{
	int i, j, k, c;
	char **s;

	if (str == NULL)
		return (NULL);

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			c++;
		i++;
	}
	c++;

	s = (char **)malloc(sizeof(*str) * c);
	c = 0;
	i = 0;
	j = 0;
	do {
		j++;
		if (str[i] == ' ' || str[i] == '\0')
		{
			s[c] = (char *)malloc(sizeof(*str) * j);
			for (k = 0; k < j; k++)
				s[c][k] = str[i - j + k];
			s[c][k] = '\0';
			c++;
			i++;
			j = 0;
		}
		i++;
	} while (str[i] != '\0');
	return (s);
}
