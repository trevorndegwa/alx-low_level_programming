#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search a string for a set of bytes
 * @s: string
 * @accept: the  set of bytes
 *
 * Return: pointer to the byte in s that matches one of accept's bytes
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
