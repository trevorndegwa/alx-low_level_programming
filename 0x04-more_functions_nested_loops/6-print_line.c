#include "main.h"
#include <stdio.h>

/**
 * print_line - prints consecutive dashes
 * @n: counter variable
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
