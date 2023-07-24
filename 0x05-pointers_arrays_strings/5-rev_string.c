#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * rev_string - print string in reverse manner
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char r;

	j = strlen(s);
	for (i = 0; i < j / 2; i++)
	{
		r = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = r;
	}
}
