#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: table to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	int flag = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
