#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of the list.
 * @n: the value.
 * Return: a pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = *head, *tmp = NULL;

	while (new != NULL)
	{
		tmp = new;
		new = new->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = tmp;
	if (tmp != NULL)
		tmp->next = new;
	if (*head == NULL)
		*head = new;
	return (new);
}
