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

	/*check if array is NULL*/
	if (array && cmp)
	{
		/*check if array size is positive*/
		if (size <= 0)
			return (-1);

		/*iterate through array*/
		for (i = 0; i < size; i++)
		{
			/*check if cmp check is TRUE*/
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
