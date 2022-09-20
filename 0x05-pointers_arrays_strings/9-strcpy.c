#include "main.h"
/**
 * _strcpy - copy string
 * @dest: value to be evaluated
 * @src: value to be evaluated
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = dest[b];
	}
	dest[a] = '\0';
	return (dest);
}
