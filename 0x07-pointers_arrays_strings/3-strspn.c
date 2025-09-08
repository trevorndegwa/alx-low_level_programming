#include "main.h"

/**
  * _strspn - gets length of a prefix substring
  * @s: the string to check
  * @accept: the prefix substring
  *
  * Return: length of prefix substring in s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
