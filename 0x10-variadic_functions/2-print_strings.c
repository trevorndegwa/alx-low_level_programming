#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, then new line
 * @separator: string separator between strings
 * @n: no. of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ap, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
