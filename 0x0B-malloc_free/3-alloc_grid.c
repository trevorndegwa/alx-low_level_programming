#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates values to grid cells
 * @width: width of the entire grid
 * @height: height of the entire grid
 *
 * Return: returns NULL on failure, or pointer to 2-D array on success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 0 || height < 0)
		return (NULL);
	grid = malloc((height * width) * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width, i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
		_puchar('\n');
	}
	return (grid);
}
