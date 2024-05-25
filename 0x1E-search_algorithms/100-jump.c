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
	int n = (int)size, i, a = 0, b = floor(sqrt(size));

	if (array  == NULL)
		return (-1);
	while (array[(int)(fmin(b, n) - 1)] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = b;
		b += floor(sqrt(n));
		if (a >= n)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", a, b);
	for (i = a; i < b && i < n; i++)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	while (array[a] < value)
	{
		a++;
		if (a == fmin(b, n))
			return (-1);
	}
	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		return (a);
	}
	return (-1);
}
