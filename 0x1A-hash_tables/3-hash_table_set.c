#include "hash_tables.h"

/**
 * hash_yable_set - adds an element to the hash table.
 * @ht: hash table pointer
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned int idx = 0;

	if(key == NULL || ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
		node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
