#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: string
 * @s2: string
 * Return: the compare result
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	res = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res += s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (res);
}
