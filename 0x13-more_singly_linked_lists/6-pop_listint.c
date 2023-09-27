#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - returna the head's data and delete head
 * @head: the list header
 * Return: head's data.
 */
int pop_listint(listint_t **head)
{
	int m = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		if (temp != NULL)
		{
			m = temp->n;
			temp = temp->next;
			free(*head);
			*head = temp;
		}
	}
	return (m);
}
