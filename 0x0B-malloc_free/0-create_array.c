#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates a array of chars
 * @size: size of array
 * @c: content of each index of array
 *
 * Return: pointer to the array if succesful
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr_array;

	if (size  == 0)
		return (NULL);

	ptr_array = malloc(size * sizeof(char));

	if (ptr_array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr_array[i] = c;
		i++;
	}
	return (ptr_array);
}
