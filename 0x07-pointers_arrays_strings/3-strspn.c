#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: contains bytes that may be part of string
 *
 * Return: no of bytes comprising length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; i++)
			;
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
