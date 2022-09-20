#include "main.h"
/**
 * puts_half - prints half a string
 * @str: value to be evaluated
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	char *x = str;
	int n;

	while (*x != '\0')
	{
		x++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for ( ; n < len ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
