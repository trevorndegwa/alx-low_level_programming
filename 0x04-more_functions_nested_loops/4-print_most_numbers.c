#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - fxn prints 0 -9 except 2 & 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	while (c != '2' && c != '4')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
