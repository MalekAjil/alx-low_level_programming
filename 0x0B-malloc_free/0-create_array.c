#include "main.h"

/**
 *create_array - creates an array of chars, and initializes it with a specific char.
 * @size: the size of the arrray
 * @c: the character.
 * Return: the pointer of the array.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	a = (char*)malloc(size);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
