#include "main.h"

/**
 * _isdigit - check whether the char is digit or not
 * @c: the character
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/**
 * _puts - prints the string to stdout
 * @str: is the string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/**
 * _strcpy - copy string from src to dest
 * @dest: the destenation string
 * @src: the source string
 * Return: destenation string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

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

