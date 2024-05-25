#include "search_algos.h"
#include <math.h>
/**
 * jump_search - returns the first occurance of [value]
 * @array: the array
 * @size: the array size
 * @value: the target value
 * Return: the index of searched value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t step = jump;
	if (array == NULL)
		return (-1);
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}
	if (prev < size && array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return ((int)prev);
	}
	return (-1);
}
