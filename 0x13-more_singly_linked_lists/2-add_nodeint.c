#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: the head of the list
 * @n: the integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t = NULL;

	t = (listint_t *)malloc(sizeof(listint_t));
	if (t == NULL)
	{
		printf("error\n");
		return (NULL);
	}
	t->n = n;
	t->next = *head;
	*head = t;
	return (t);
}
