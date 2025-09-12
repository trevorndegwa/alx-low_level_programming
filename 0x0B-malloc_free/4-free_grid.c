#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2-D grid
 * @grid: double pointer to the 2-D grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
