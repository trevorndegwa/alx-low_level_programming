#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies string somewhere in memory
 * @str: string to duplicate
 *
 * Return: pointer to string copy or NULL if memory alloc failed
 */
char *_strdup(char *str)
{
	char *arr;
	int len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	arr = malloc((len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
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
