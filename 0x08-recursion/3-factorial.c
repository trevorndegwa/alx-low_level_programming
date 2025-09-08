#include "main.h"

/**
 * factorial - returns factorial of a num
 * @n: integer to get factorial of
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
