#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the node at specified index
 * @head: the list header
 * @index: the index of requested node
 * Return: void.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
