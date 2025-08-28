#include "main.h"

/**
 * _abs - computes absolute value of an int
 * @i: parameter to be checked
 *
 * Return: absolute value of int
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		i = i * -1;
		return (i);
	}
}
