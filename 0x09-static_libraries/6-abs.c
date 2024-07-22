#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value of an int
 * @a: integer to be evaluated
 * Return: integer absolute val
 */

int _abs(int a)
{
	if (a > 0)
	{
		a = +a;
	}
	else
	{
		a = -a;
	}
	return (a);
}
