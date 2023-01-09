#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Pointer to a 2D array of ints
 * @width: Width of array
 * @height: Height of array
 *
 * Return: Pointer to 2D array NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
