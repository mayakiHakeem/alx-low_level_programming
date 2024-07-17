#include "hash_tables.h"
/**
 * key_index - compute index of key using the hash generated
 * @key: of data to be stored
 * @size: size of hash table
 *
 * Return: Index of key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2((unsigned char *)key);

	index =  hash % size;

	return (index);
}
