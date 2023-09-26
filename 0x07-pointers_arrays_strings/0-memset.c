#include "main.h"

/**
* _memset - it fills the first n bytes of the memory area
* pointed to by @s with the byte @c
* @s: pointer to the memory area that needs filling
* @c: character to fill the memory area
* @n: number of bytes to be filled
*
* Return: pointer to the filled memory area @s
*/

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
