#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid previously allocated memory by alloc_grid function.
 * @grid: address of the 2-dimensional grid.
 * @height: height of the grid.
 *
 * Redurn: void
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
