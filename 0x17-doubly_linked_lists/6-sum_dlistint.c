#include "lists.h"

/**
 * sum_dnodeint - returns the sum of dlistint_t list.
 * @head: the head of the list
 * Return: the dum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
