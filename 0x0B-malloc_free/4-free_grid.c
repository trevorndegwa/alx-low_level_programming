#include "main.h"
/**
 * free_grid - function frees a 2-D grid created by malloc grid
 * @grid: memory block to be freed
 * @height: height of the grid
 * Return: function returns void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
