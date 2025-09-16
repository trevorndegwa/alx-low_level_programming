#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an integer array
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the integer array, NULL otherwise
 */
int *array_range(int min, int max)
{
	unsigned int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = (unsigned int)(max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}
