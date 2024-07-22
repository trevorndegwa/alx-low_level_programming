#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haystack: locates a substring
 * @needle: the substring to locate
 *
 * Return: pointer to the beginning of the located substring,or a
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
