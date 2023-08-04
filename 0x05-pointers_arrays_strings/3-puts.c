#include "main.h"

/**
 * _puts - prints the string to stdout
 * @str: is the string
 * Return: void
 */
void _puts(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                _putchar(str[i]);
                i++;
        }
}
