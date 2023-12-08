#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position.
 * @head: the head of the list.
 * @index: the index of the list where the node will be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		if (tmp != NULL)
			tmp->prev = NULL;
		*head = tmp;
		return (1);
	}

	while (tmp != NULL && i < index)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
		if (i == index)
			break;
	}
	if (i != index)
		return (-1);
	if (prev != NULL)
	{
		prev->next = tmp->next;
		tmp->next->prev = prev;
	}
	free(tmp);
	return (1);
}
