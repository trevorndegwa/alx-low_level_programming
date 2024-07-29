#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: smallest value in array
 * @max: largest value in array
 * Return: pointer to mem block on success, NULL on failure
 */
int *array_range(int min, int max)
{
	int *block;
	int i, j = 0;

	if (min > max)
		return (NULL);
	block = malloc(((max - min) + 1) * sizeof(int));
	if (block == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		block[j] = i;
		j++;
	}
	return (block);
}
