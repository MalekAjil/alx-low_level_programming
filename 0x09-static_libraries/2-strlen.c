#include "main.h"
#include<string.h>

/**
 * _strlen - returns the length of the string
 * @s: string variable
 * Return: str length
 */
int _strlen(char *s)
{
	int i;

        i = 0;
        while (s[i] != '\0')
        {
                i++;
        }
	return (i);
}
