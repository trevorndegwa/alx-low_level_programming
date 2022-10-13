#include "main.h"
/**
<<<<<<< HEAD
 * _memset - fills a memory block with a certain value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: integers to be changed
 *
 * Return: changed array
=======
 * _memset - fills a block with a specific value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
>>>>>>> 10574e2264f79fef28ccc9745fcf325207633a39
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
