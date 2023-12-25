#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table pointer
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *next = NULL;
	unsigned int idx = 0;

	if (key == NULL || ht == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		next = ht->array[idx];
		if (!strcmp(next->key, key))
		{
			free(next->value);
			next->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = next;
	ht->array[idx] = node;
	return (1);
}
