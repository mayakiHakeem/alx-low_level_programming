#include "hash_tables.h"

/**
 * hash_table_get - retrieve values of supplied keys
 * @ht: hash table to search for
 * @key: the key to retrieve value for in table @ht
 *
 * Return: value associated with key (on success) | NULL (failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
