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
	size_t b = sqrt(size);
	size_t a = 0;
	size_t step = b;

	if (array == NULL)
		return (-1);
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a = step;
		step += b;
	}
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	printf("Value found between indexes [%lu] and [%lu]\n", a, step);
	while (a < size && array[a] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a++;
	}
	if (a < size && array[a] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		return ((int)a);
	}
	return (-1);
}
