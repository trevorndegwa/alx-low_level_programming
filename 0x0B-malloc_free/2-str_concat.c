#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, pointer to memory alloc on success
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len, len1 = 0, len2 = 0, concat_index = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2;

	concat_str = malloc((len + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat_str[concat_str++] = s1[i];
	for (i = 0; i < len2; i++)
		concat_str[concat_str++] = s2[i];
	concat_str[concat_index] = '\0';

	return (concat_str);
}
