#include "main.h"

/**
 * puts_half - prints half a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, len, n, j;

	len = _strlen(str);
	n = (len - 1) / 2;
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = n + 1; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

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
