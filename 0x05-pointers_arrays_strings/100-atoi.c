#include "main.h"
#include "string.h"
#include <stdlib.h>

/**
 * _atoi - return integer from string
 * @s: the string
 * Return: integer number
 */
int _atoi(char *s)
{
	int i, j, sg, nb;

	nb = 0;
	sg = 1;
	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		if (s[i] == 45)
			sg *= -1;
		if (s[i] > 47 && s[i] < 58)
		{
			nb = s[i] - 48;
			while (s[i + 1] > 47 && s[i + 1] < 58)
			{
				++i;
				nb *= 10;
				nb += s[i] - 48;
			}
			break;
		}
	}
	nb *= sg;
	return (nb);
}
