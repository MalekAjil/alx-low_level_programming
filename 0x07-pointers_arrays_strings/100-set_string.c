#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * set_string - sets a value of a pointer to char.
 * @s: the string
 * @to: the char
 * Return: void
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; s[i][0] >= '\0'; i++)
	{
		printf("%c", s[i][0]);
		to[i] = *s[i];
	}

}
