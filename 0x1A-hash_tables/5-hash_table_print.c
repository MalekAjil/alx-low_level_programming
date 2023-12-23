#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
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
