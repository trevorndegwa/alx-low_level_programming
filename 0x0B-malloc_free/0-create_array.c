#include "main.h"

/**
 * create_array - creates an array of chars and inits with certain char
 * @size: size of the array
 * @c: character to initialise array
 * Return: pointer to array if ok, NULL if alloc fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
