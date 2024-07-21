#include "main.h"
/**
 * factorial - function gets factorial of an int
 * @n: integer to calculat factorial for
 * Return: returns an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
