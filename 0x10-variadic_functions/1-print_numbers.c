#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * print_numbers - print nums then new line
 * @separator: string to be printed between nums
 * @n: count of params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
