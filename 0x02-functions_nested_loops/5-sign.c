#include "main.h"

/**
 * print_sign - prints sign of a no.
 * @n: parameter to be evaluated
 *
 * Return: 1 (+ve), 0 (0), -1 (-ve)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
