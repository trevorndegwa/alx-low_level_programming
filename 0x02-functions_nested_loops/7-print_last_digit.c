#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of an int
 * @i: integer variable
 * Return: val of last digit
 */

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = -(i % 10);
	}
	else if (i > 0)
	{
		i = i % 10;
	}
	else
	{
		i = 0;
	}
	_putchar(i + '0');
	return (i);
}
