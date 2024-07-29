#include "main.h"

/**
 * string_nconcat - concatenates s1 with n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to allocated space or NULL in failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, len_concat, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	len_concat = len1 + n;
	concat_str = malloc((len_concat + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];
	concat_str[len_concat] = '\0';

	return (concat_str);
}
