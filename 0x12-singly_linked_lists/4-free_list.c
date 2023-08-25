#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list
 * @header: the list header
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
