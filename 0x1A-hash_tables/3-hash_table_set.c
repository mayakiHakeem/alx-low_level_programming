#include "hash_tables.h"

/**
 * hash_table_set - add/update element to the hash table
 * @ht: hash table to add to
 * @key: key
 * @value: value is data associated with the @key
 *
 * Return: 1 (success) | 0 (failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new_node;
	unsigned long int index;

	if (!key || *key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];

	while (!current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
