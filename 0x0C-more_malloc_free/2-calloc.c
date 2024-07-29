#include "main.h"

/**
 * _calloc - allocates memory using malloc and initialises to 0
 * @nmemb: no. of elements
 * @size: size of memory block to allocate
 * Return: pointer to allocated on success, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		block[i] = 0;
	return (block);
}
