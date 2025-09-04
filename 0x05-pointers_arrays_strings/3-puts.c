#include <stdio.h>

/**
 * _puts - prints a string then newline
 * @str: string to print
 */
void _puts(char *str)
{
	char n;

	n = *str;
	while (n != '\0')
	{
		_putchar(n);
		str++;
	}
	_putchar('\n');
}
