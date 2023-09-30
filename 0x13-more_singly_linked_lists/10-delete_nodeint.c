#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at specified index
 * @head: the list header
 * @index: the index of node
 * Return: void.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *prev = *head;

	while (i < index && temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
