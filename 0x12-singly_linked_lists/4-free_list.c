#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list
 * @head: the list header
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
