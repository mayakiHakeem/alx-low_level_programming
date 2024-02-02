#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2D array created by alloc_grid()
 * @grid: allocated 2D array
 * @height: of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
