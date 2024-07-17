#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: the index of searched value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t b = sqrt(size);
	size_t a = 0;
	size_t step = b;
	listint_t *tmp = list;

	if (array == NULL)
		return (-1);
	while (tmp->index < a)
		tmp = tmp->next;
	while (step < size && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", a, tmp->n);
		a = step;
		step += b;
		while (tmp->index < a)
			tmp = tmp->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", a, tmp->n);
	printf("Value found between indexes [%lu] and [%lu]\n", a, step);
	while (a < size && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", a, tmp->n);
		a++;
		tmp = tmp->next;
	}
	if (a < size && tmp->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", a, tmp->n);
		return ((int)a);
	}
	return (-1);
}
