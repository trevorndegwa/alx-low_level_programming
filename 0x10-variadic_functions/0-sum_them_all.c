#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns sum of its params
 * @n: count parameter
 *
 * Return: Parameter sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list ap;
	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return result;
}
