#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to consider allocation
 *
 * Return: pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
