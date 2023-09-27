#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees the list
 * @head: the list header
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
		head = NULL;
	}
}
