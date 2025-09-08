#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of no.
 * @n: the number
 *
 * Return: sqrt, or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - tries to find the sqrt recursively
 * @n: number to find sqrt of
 * @i: current guess
 *
 * Return: sqrt of n if found, else -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
