#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: the head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t c = 0;

	while (tmp != NULL)
	{
		c++;
		tmp = tmp->next;
	}
	return (c);
}
