#include "main.h"
#include <stddef.h>
/**
* _strchr - locate a character in the string
* @s: this is the string
* @c: now the character
*
* Return: a pointer to a character i.e the character found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
