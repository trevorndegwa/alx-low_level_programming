#include "variadic_functions.h"
/**
 * print_all - function prints anything
 * @format: list of type of arguments passed to fxn
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp;
	int i = 0;
	int print_comma = 0;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(ap, format);
	while (format[i])
	{
		if (print_comma)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				print_comma = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				print_comma = 1;
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, int));
				print_comma = 1;
				break;
			case 's':
				temp = va_arg(ap, char *);
				if (temp != NULL)
					printf("%s", temp);
				else
					printf("(nil)");
				print_comma = 1;
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ap);
	printf('\n');
}
