#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: the pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		if (c == index)
			return (tmp);
		tmp = tmp->next;
		c++;
	}
	return (NULL);
}
