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

	h = malloc(sizeof(hash_table_t) * size);
	if (h == NULL)
		return (NULL);
	return (h);
}
