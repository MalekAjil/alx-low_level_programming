#include "search_algos.h"
/**
 * min - return minimum number
 * @a: first num
 * @b: second num
 * Return: minimum
 */
size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
/**
 * search - recursive function
 * @array: the array
 * @left: the left side
 * @right: the right side
 * @value: the value
 * Return: the index
 */
int search(int *array, int left, int right, int value)
{
	int i, mid;

	printf("Searching in array: ");
	for (i = left; i <= (int)right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
	if (right == left)
	{
		if (array[left] == value)
			return (left);
		else
			return (-1);
	}
	mid = (int)(left + right) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (search(array, left, mid - 1, value));
	else
		return (search(array, mid + 1, right, value));
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index of searched value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, bound - 1);
	return (search(array, bound / 2, min(bound, size) - 1, value));
}
