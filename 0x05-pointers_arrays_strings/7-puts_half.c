#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * puts_half - print second half of the string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	j = strlen(str);
	for (i = j / 2; i < j; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
