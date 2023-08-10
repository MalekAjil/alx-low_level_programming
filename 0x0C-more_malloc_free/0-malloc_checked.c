#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- allocates memory using malloc.
 * @b: the size of allocated memory.
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
