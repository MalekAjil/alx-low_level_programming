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

	j = strlen(s);
	char r[j];

	for (i = j - 1; i >= 0; i--)
	{
		r[j - 1 - i] = s[i];
	}
	for (i = 0; i < j; i++)
	{
		s[i] = r[i];
	}
}
