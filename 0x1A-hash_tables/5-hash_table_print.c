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

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s':'%s'", node->key, node->value);
		}
		if (i != (ht->size - 1))
			printf(", ");

		node = node->next;
	}
	printf("}\n");
}
