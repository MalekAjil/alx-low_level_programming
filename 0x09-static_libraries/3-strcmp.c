#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings.
 * @s1: string
 * @s2: string
 * Return: the compare result
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, res;

	j = strlen(s1);
	res = 0;

	for (i = 0; i < j; i++)
	{
		if (s1[i] != s2[i])
		{
			res += s1[i] - s2[i];
			break;
		}
	}

	return (res);
}
