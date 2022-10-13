#include "main.h"
/**
 * _memcpy - a function copying memory area
 * @dest: memory destination
 * @src: copied from this memory
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
