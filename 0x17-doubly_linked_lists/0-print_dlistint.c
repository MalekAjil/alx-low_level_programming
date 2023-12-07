#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head of the list
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		c++;
	}
	return (c);
}
