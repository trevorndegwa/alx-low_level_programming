#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints sign of no.
 * @n: variable name
 * Return: 1 if +ve, 0 if 0, -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	else
	{
		return (0);
		_putchar(48);
	}
}
