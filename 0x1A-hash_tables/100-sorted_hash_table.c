#include "hash_tables.h"

/**
 * shash_table_create - creates hash table
 * @size: the size of the hash table
 * Return: the pointer of hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	return (sht);
}

/**
 * shash_table_set - sets the hash table
 * @ht: the hash table pointer
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *next = NULL;
	unsigned int idx = 0;

	if (key == NULL || ht == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		next = ht->array[idx];
		if (!strcmp(next->key, key))
		{
			next->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = next;
	ht->array[idx] = node;
	return (1);
}

/**
 * shash_table_get - get value of corresponed key
 * @ht: hash table
 * @key: the key
 *
 * Return: node value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
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

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int idx = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (flag)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse manner
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int idx = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (idx = ht->size - 1; idx; idx--)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (flag)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
