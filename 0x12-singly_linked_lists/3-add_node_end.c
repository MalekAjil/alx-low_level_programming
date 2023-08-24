#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to the tail of the list
 * @head: the first element of the list
 * @str: the string of the node
 * Return: the address of the new element at the end of a list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while ((*head)->next != NULL)
			(*head) = (*head)->next;
		(*head)->next = new;
	}


	return (new);
}
