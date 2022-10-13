#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that looks for certan bytes in string
 * @s: an input string
 * @accept: input with characters to locate in string s
 * Return: a pointer to byte in s or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
