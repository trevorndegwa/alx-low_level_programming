#include "main.h"

/**
 * _strdup - function returns pointer to a string copy
 * @str: string to copy in allocated space
 * Return: pointer to space on success, NULL if failure
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	array = malloc((len + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		array[i] = str[i];
	return (array);
}
