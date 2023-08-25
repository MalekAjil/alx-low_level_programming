#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: the list's header.
 * Return: number of list's elements.
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
