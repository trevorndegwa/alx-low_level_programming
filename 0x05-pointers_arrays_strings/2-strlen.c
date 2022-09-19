#include "main.h"
/**
 * _strlen - returns string length
 *
 * @s: value to evaluate
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
