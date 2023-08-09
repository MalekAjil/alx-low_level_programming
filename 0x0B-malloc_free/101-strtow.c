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

	if (str == NULL || str[0] == '\0')
		return (NULL);

	c = 0;
	i = 0;
	do {
		if ((str[i] == ' ' || str[i] == '\0') && i > 0 && str[i - 1] != ' ')
			c++;
		i++;
	}  while (str[i] != '\0');
	if (c == 0)
		return (NULL);

	s = (char **)malloc(sizeof(*str) * c);
	c = 0;
	i = 0;
	j = 0;
	do {
		j++;
		if ((str[i] == ' ' || str[i] == '\0') && i > 0 && str[i - 1] != ' ')
		{			
			s[c] = (char *)malloc(sizeof(*str) * j);
			for (k = 0; k < j; k++)
				s[c][k] = str[i - j + k];
			s[c][k] = '\0';
			c++;
			i++;
			j = 0;
		}
		else if (str[i] == ' ')
			j = 0;
		i++;
	} while (str[i] != '\0');
	return (s);
}
