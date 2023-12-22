#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table.
 * @size: the size of the hash table
 * Return: Returns a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		h->array[i] = NULL;
	return (h);
}
