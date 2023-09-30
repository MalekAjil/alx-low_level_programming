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

	if (head == NULL || *head == NULL)
		return (-1);
	while (i < index && temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp != NULL)
	{
		prev->next = temp->next;
		free(temp);
	}
	else
		prev->next = NULL;
	return (1);
}
