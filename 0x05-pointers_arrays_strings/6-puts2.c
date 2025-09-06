#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
