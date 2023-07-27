#include "main.h"
#include <string.h>

/**
 * rot13 - encoding
 * @str: the string
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;
	static char dest[100];

	j = strlen(str);
	strcpy(dest, str);
	for (i = 0; i < j; i++)
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			dest[i] = str[i] + 13;
	}
	return (dest);
}
