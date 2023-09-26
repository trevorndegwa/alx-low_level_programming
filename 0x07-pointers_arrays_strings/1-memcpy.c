#include "main.h"
/**
*_memcpy - this function copies memory area
*@dest: memory where is stored to
*@src: memory where its copied from
*@n: byte no.
*
*Return: copied memory with the n-byte different
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
