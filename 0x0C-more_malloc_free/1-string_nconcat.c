#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string of which n bytes are concatenated to s1
 * @n: no. of bytes of s2 to concat to s1
 *
 * Return: pointer to allocated space, or NULL if unsuccessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	if (n >= len2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}

/**
 * _strlen - gives lengths of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len = len + 1;
	}
	return (len);
}
