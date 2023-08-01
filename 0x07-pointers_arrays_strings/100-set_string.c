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
	int i, n;

	n = strlen(*s);
	for (i = 0; i < n; i++)
	{
		to[i] = *s[i];
	}

}
