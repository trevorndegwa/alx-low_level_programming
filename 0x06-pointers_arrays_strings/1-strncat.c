#include "main.h"

/**
 * _strncat - concatenates n src bytes
 * @dest: destination buffer
 * @src: source buffer
 * @n: bytes at most from n to use
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, ld;

	i = 0;
	ld = 0;

	while (dest[i])
	{
		i++;
		ld++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[ld] = src[i];
		ld++;
	}
	return (dest);
}
