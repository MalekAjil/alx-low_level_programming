#include "main.h"
#include <string.h>

/**
 * _strspn -  returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: the string
 * @accept: the substring
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n, m;
	unsigned int l;

	l = 0;
	n = strlen(s);
	m = strlen(accept);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (s[i] == accept[j])
				l++;
			if (s[i] == ' ' && l > 0)
				return (l);
		}

	return (l);
}
