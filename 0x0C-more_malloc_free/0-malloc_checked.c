#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size to be allocated
 *
 * Return: pointer to address of allocated or exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
