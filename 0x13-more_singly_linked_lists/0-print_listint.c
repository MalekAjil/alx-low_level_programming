#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: the head of the list
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *tmp;

	tmp = (listint_t *)h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}
	return (n);
}
