#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: integer to be evaluated
 *
 * Return: integer value of last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
	}
	else if (n > 0)
	{
		n = n % 10;
	}
	else
	{
		n = 0;
	}
	_putchar(n + '0');
	return (n);
}
