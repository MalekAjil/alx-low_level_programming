#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the list
 * @head: the list header
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
