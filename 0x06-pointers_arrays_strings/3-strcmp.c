#include "main.h"

/**
 * _strcmp - function compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 0 if equal, -ve val if s1 < s2, +ve val if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
