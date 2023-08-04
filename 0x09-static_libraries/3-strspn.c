#include "main.h"

/**
 * _strspn -  returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: the string
 * @accept: the substring
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int l;

	l = 0;
	i = 0;
	while (s[i] !='\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				l++;
			if (s[i] == ' ' && l > 0)
				return (l);
			j++;
		}
		i++;
	}

	return (l);
}
