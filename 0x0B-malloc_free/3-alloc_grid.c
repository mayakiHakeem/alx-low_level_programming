#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: size of column
 * @height: size of row
 *
 * Return: ptr to 2D array. NULL if it fails or if height or width is -tive
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr_array;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr_array = malloc(sizeof(int *) * height);
	if (ptr_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr_array[i] = malloc(sizeof(int) * width);
		if (ptr_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr_array[j]);
			free(ptr_array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr_array[i][j] = 0;
	}
	return (ptr_array);
}
