#include <stdio.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: the array
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL && size > 0)
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
}
