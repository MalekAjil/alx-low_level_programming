#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size).
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: pointer to array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (old_size > new_size)
		old_size = new_size;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	free(ptr);
	return (new_ptr);
}
