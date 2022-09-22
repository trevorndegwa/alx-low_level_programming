#include "main.h"

/**
 * print_number - prints # using _putchar
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int copy, sth, size = 1, ones = n % 10;

	n /= 10;
	copy = n;
	if (ones < 0)
	{
		ones *= -1, copy *= -1, n *= -1;
		_putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
		{
			copy /= 10, size *= 10;
		}
		while (size > 0)
		{
			sth = n / size;
			_putchar('0' + sth);
			n -= sth * size;
			size /= 10;
		}
	}
	_putchar('0' + ones);
}
