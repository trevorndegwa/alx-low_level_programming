#include "main.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: base number
 * @y: index/exponent
 *
 * Return: value after indice operation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
