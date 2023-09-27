#include "lists.h"

/**
 * sum_listint - returns the sum of elements in a linked listint_t list.
 * @head: the head of the list
 * Return: returns the sum of elements in a linked listint_t list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = (listint_t *)head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

