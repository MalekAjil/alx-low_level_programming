#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - get value of corresponed key
 * @ht: hash table
 * @key: the key
 *
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx = 0;
	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
