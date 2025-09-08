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
	unsigned int i, j, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			if (!found)
				return (i);
		}
	}
	return (i);
}
