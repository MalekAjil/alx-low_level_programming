#include "lists.h"

/**
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = h;
	size_t c = 0;

	while (tmp != NULL)
	{
		c++;
		tmp = tmp->prev
	}
	return (c);
}
