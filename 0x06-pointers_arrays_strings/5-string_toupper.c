#include "main.h"
#include <string.h>

/**
 * string_toupper - makes all string letters upper case.
 * @str: the string
 * Return: upper case string
 */
char *string_toupper(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
	}

	return (str);
}
