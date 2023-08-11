#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value of array
 * @max: last value of array
 *
 * Return: ptr to the array (success)
 * NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr_ptr;
	int i, size;


	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr_ptr = malloc(sizeof(int) * size);

	if (arr_ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr_ptr[i] = min;

	return (arr_ptr);
}
