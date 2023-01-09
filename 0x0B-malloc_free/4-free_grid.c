#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees grid allocated
 * @grid: Grid to be freed
 * @height: Height of grid
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
