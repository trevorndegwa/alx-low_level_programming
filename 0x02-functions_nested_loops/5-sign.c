#include "main.h"

/**
 * print_sign - determines sign of number
 *
 * @n: input integer
 *
 * Return: 1 if greater, 0 is 0, -1 is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
	_putchar('\n');
}
