#include <stdio.h>
#include "lists.h"

/**
 * list_len - rturns the number of elements in a linked list
 * @h: the list header
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
