#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * puts2 - print string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	j = strlen(str);
	for (i = 0; i < j; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
