#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to array.
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[i - min] = i;
	return (ptr);
}
