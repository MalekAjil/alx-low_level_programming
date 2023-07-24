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
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		printf("%c\n", str[i]);
	}
}
