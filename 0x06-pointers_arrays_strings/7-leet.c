#include "main.h"
#include <string.h>

/**
 * leet - encoding
 * @str: the string
 * Return: void
 */
char *leet(char *str)
{
	int i, j;
	static char res[10];

	j = strlen(str);
	for (i = 0; i <= j; i++)
	{
		res[i] = str[i];
		if (str[i] == 'a' || str[i] == 'A')
			res[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			res[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			res[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			res[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			res[i] = '1';
	}
	return (res);
}
