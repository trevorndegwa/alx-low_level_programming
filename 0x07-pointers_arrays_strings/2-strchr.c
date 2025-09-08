#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: character to locate
 *
 * Return: pointer to 1st occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
