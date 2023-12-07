#include "lists.h"

/**
 *
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
