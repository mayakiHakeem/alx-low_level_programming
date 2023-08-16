#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int
 * @array: array to search
 * @size: size of array
 * @cmp: ptr to the function to compare values
 *
 * Return: index to the first occurence of int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
