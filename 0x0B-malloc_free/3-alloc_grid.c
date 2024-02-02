#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create 2D array
 * @width: width of the array
 * @height: height of array
 *
 * Return: NULL if fail or width or height is 0. ptr to array on success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid_arr;

	if (width == 0 || height == 0)
		return (NULL);

	grid_arr = malloc(sizeof(int *) * height);
	if (!grid_arr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid_arr[i] = malloc(sizeof(int) * width);

		if (!grid_arr[i])
		{
			for (j = 0; j < i; j++)
				free(grid_arr[j]);
			free(grid_arr);
			return (NULL);
		}

	for (j = 0; j < width; j++)
		grid_arr[i][j] = 0;
	}
	return (grid_arr);
}
