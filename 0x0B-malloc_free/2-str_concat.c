#include "main.h"
/**
 * str_concat - function to concatenate 2 string
 * @s1: string
 * @s2: string
 * Return: pointer to allocated space on success, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len1 = len1 + 1;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	len2 = len2 + 1;
	array = malloc((len1 - 1 + len2) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		array[i] = s1[i];
	j = 0;
	for (i = len1; i <= (len1 - 1 + len2); i++)
	{
		array[i] = s2[j];
		j++;
	}

	return (array);
}
