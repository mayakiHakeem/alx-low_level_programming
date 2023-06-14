#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: content of array
 *
 * Return: 1 if size is 0, ptr to str if > 0. NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc((sizeof(char) * size) + 1);
	for(i = 0; i <= size; i++)
	{
		array[i] = c;
	}
	return (array);
}
