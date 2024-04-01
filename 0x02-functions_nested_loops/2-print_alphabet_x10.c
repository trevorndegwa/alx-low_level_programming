#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int c;
	char d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
	}
	_putchar('\n');
}
