#include "main.h"

/**
 * _strncpy - copies a string, including the terminating null byte
 * @dest: destination buffer storing copied string
 * @src: source string
 * @n: max integer of src buffer to print
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
