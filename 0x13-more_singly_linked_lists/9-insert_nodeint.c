#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds node at specified index of the list
 * @head: the first element of the list
 * @idx: specified index
 * @n: the number
 * Return: the address of the new element at the end of a list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *new, *prev;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if ((*head) != NULL)
	{
		tmp = *head;
		while (i < idx && tmp->next != NULL)
		{
			prev = tmp;
			tmp = tmp->next;
			i++;
		}
		prev->next = new;
		new->next = tmp;
	}
	else
		(*head) = new;

	return (new);
}
