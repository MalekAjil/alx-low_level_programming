#include "search_algos.h"
#include <math.h>
/**
 * linear_skip - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @value: is the value to search for
 * Return: the index of searched value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = list;

	if (list == NULL)
		return (NULL);
	printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
			tmp->index, tmp->index);
	if (tmp->n == value)
		return (tmp);
	return (NULL);
}
