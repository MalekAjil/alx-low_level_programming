#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list.
 * @head: the head of the list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp1 = head, *tmp2 = head;

	while (tmp2 != NULL)
	{
		tmp1 = tmp2;
		tmp2 = tmp2->next;
		free(tmp1);
	}
}
