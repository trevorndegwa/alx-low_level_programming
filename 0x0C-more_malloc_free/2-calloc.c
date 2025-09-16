#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory like the calloc func
 * @nmemb: array elements to allocate memory for
 * @size: size of each array element
 *
 * Return: pointer to allocated memory, or NULL in failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb > UINT_MAX / size)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}
