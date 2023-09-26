#include "main.h"

/**
* _memset - it fills the first n bytes of the memory area
* pointed to by @s with the byte @c
* @s: pointer to the memory area that needs filling
* @b: character to fill the memory area
* @n: number of bytes to be filled
*
* Return: pointer to the filled memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
