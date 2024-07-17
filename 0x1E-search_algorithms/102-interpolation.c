#include "search_algos.h"
#include <assert.h>
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index of searched value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);
	while ((array[low] <= value) && (value < array[high]))
	{
		pos = low + (((double)(high - low)
				/ (array[high] - array[low]))
				* (value - array[low]));
		if ((low > pos) || (pos > high))
		{
			printf("Value checked array[%ld] is out of range", pos);
			return (-1);
		}
		else
			printf("Value checked arra[%ld] = [%d]\n", pos, array[pos]);
		if (value < array[pos])
		{
			high = pos;
		}
		else
		{
			low = pos + 1;
		}
	}
	return (low - 1);
}
