#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a param function on each element of array
 * @array: array
 * @size: size of array
 * @action: functio_pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		return;
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
