#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: times to print char _
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
