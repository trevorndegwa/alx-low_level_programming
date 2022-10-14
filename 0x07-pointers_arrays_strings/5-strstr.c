#include "main.h"
#include <stddef.h>
/**
 * _strstr - function locating substring
 * @haystack: input string to search in
 * @needle: an input string to locate in haystack
 * Return: a pointer at the beginning of located substring or NULL
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
	return (NULL);
}
