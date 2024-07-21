#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table
 * @size: size of the hash_table
 *
 * Return: ptr to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;


	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}


/**
 * shash_table_set - insert a node in sorted hash table
 * @ht: hash table to set entry to insert
 * @key: key part of node to be inserted
 * @value: value associated with inserted key
 *
 * Return: 1 success | 0 failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;
	char *value_copy;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}
	new_node  = malloc(sizeof(shash_node_t));
	if (!new_node)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		free(value_copy);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] =  new_node;
	if (!ht->shead || strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		if (ht->shead)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
		if (!ht->stail)
			ht->stail = new_node;
	}
	else
	{
		current = ht->shead;
		while (current->snext && strcmp(key, current->snext->key) > 0)
			current = current->snext;

		new_node->snext = current->snext;
		new_node->sprev = current;
		if (current->snext)
			current->snext->sprev = new_node;
		current->snext = new_node;
		if (!new_node->snext)
			ht->stail = new_node;
	}
	return (1);
}


/**
 * shash_table_get - retrieve value of a given key
 * @ht: hash table to retrieve value from
 * @key: to retrieve value for
 *
 * Return: value(str) | NULL (failure)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}


/**
 * shash_table_print - print sorted hash table
 * @ht: hash table to print
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	int flag = 1;
	shash_node_t *current;

	if (!ht)
		return;
	printf("{");
	current = ht->shead;
	while (current)
	{
		if (!flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 0;
		current = current->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - print sorted hash table in reverse
 * @ht: hash table to print
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 1;
	shash_node_t *current;

	if (!ht)
		return;
	printf("{");
	current = ht->stail;
	while (current)
	{
		if (!flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 0;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete -  delete a hash table
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
