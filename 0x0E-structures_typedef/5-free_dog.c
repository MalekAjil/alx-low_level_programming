#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: the dog pointer.
 * Return: void.
 */
void free_dog(dog_t *d)
{
	free(d);
}
