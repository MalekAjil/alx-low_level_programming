#include "main.h"

/**
 * _atoi - return integer from string
 * @s: the string
 * Return: integer number
 */
int _atoi(char *s)
{
	int i, sg;
	unsigned int nb;

	nb = 0;
	sg = 1;
	i = 0;
	while (s[i] != '\0')
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
		i++;
	}
	nb *= sg;
	return (nb);
}
