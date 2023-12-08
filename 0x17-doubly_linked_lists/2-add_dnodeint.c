#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the list.
 * @n: the value.
 * Return: a pointer to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head, *tmp = NULL;

	while (new != NULL)
	{
		tmp = new;
		new = new->prev;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = tmp;
	new->prev = NULL;
	if (tmp != NULL)
		tmp->prev = new;
	*head = new;
	return (new);
}
