#include "main.h"
#include <unistd.h>
/**
 * _puts - prints the string to stdout
 *
 * @str: values to evaluate
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int s = 0;

	while (*(str + s) != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
