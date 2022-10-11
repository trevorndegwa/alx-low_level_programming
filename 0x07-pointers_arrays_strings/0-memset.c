#include "main.h"
/**
 * _memset - fills a memory block with a certain value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: integers to be changed
 *
 * Return: changed array
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
