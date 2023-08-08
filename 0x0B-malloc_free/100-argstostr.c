#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count.
 * @av: arguments values.
 * Return: Concatenated string of arguments values.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
		size += _strlen(av[i]);
	str = malloc(sizeof(*str) * size + 1);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n';
	}
	return (str);
}
/**
 * _strlen - return the length of the string
 * @str: the string
 * Return: the length
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (++i);
}
