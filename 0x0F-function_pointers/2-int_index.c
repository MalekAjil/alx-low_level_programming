#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer.
 * @array: the array
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches or size <=0,
 * otherwise return the index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
