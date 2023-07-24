#include "main.h"
#include<stdio.h>

/**
 * print_rev - print string in reverse manner
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = length(s); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
