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
	int i, j, k;

	j = strlen(str);
	if (j % 2 == 0)
		k = j / 2;
	else
		k = (j + 1) / 2;
	for (i = k; i < j; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
