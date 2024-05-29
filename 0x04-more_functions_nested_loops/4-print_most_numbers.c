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

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
		else
			break;
	}
	_putchar('\n');
}
