#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to match
 *
 * Return: pointer to 1st byte it s matching one of accept,
 *	   or NULL, if no such byte exists
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
