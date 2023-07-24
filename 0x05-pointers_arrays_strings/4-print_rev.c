#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_rev - print string in reverse manner
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
