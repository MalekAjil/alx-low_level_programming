#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the list.
 * @idx: the index of the list where the new node will be inserted
 * @n: the value.
 * Return: a pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = *h, *tmp = *h;
	unsigned int i = 0;

	while (tmp != NULL && i < idx)
	{
		i++;
		if (i == idx)
			break;
		tmp = tmp->next;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = tmp;
	if (tmp != NULL)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	if (*h == NULL)
		*h = new;
	return (new);
}
