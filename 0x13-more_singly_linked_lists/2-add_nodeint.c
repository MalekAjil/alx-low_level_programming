#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds node to the head of the list
 * @head: the first element of the list
 * @n: the number
 * Return: the address of the new element at the beggining of a list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
