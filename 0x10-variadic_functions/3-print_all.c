#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * @format: lost of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	int print_comma = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (print_comma)
			printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
