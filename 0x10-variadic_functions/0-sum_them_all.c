#include "variadic_functions.h"

/**
 * sum_them_all - returns sum when giving unkonw args
 * @n: count of undefined arguments
 * Return: sum on success, 0 if no optional args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
