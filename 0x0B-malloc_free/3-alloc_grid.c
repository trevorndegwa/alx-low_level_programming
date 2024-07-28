#include "main.h"
/**
 * alloc_grid - function creates 2-D int array
 * @width: columns of array
 * @height: rows of array
 * Return: NULL on failure, pointer to 2-D array on success
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
