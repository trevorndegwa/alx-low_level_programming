#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: 1st string
 * @src: appending string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int ld, ls, i, j;

	ld = _strlen(dest);
	ls = _strlen(src);
	j = 0;

	for (i = ld; i <= (ld + ls - 1); i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
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
