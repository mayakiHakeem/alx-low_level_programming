#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to a 2D array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: ptr to the 2D array (SUCCESS).
 * Return: NULL if allocation failed
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_grid;

	if (width == 0 || height == 0)
		return (NULL);

	ptr_grid = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		ptr_grid[i] = malloc(sizeof(int) * width);

		if (ptr_grid == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr_grid[j]);
			free(ptr_grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr_grid[i][j] = 0;
	}
	return (ptr_grid);
}
