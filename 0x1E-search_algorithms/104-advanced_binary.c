#include "search_algos.h"

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
 * advanced_binary - returns the first occurance of [value]
 * @array: the array
 * @size: the array size
 * @value: the target value
 * Return: the index of searched value
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array  == NULL)
		return (-1);
	return (search(array, 0, (int)size - 1, value));
}
