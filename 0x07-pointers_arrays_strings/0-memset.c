#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: bytes of the memory area pointed to by s with the constant byte b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        s[i++] = b;
    }
    
}