#include "main.h"
#include <string.h>

/**
 * cap_string - makes string letters capital.
 * @str: the string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
	}

	return (str);
}
