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
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
