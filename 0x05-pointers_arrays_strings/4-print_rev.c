#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);
	len--;

	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

#include <stdio.h>

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
