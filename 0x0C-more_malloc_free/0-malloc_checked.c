#include "main.h"

/**
 * malloc_checked - function allocates memory
 * @b: size of memory
 * Return: pointer to array on success, else exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
