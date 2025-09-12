#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * argstostr - concatenates all program arguments
 * @ac: number of arguments
 * @av: the arguments
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += _strlen(av[i]) + 1;

	ptr = malloc((total_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			ptr[k++] = av[i][j];
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
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
