#include "search_algos.h"
/**
 * linear_search - returns the first occurance of [value]
 * @array: the array
 * @size: the array size
 * @value: the target value
 * Return: the index of searched value
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array  == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
