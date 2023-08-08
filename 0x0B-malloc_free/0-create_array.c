#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the arrray
 * @c: the character.
 * Return: the pointer of the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size > 0)
	{
		a = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
			a[i] = c;
		return (a);
	}
	return (NULL);
}
