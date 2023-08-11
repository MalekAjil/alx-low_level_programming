#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array elements.
 * @size: size of array.
 * Return: pointer to array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
