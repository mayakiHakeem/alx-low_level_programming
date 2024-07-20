#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: ptr to hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			free(node->key);
			free(node->value);
			temp = node;
			node = node->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
