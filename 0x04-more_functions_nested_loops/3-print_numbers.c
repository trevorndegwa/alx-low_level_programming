#include "main.h"
#include <stdio.h>

/**
 * print_numbers - fxn that prints 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
