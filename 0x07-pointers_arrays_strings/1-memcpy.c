#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: bytes to copy from src buffer
 *
 * Return: pointer to dest
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
