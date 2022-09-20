#include "main.h"
/**
 * puts2 - prints every other number
 * @str: value to be evaluated
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *s = str;
	int y;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	l = len - 1;
	for (y = 0; y <= l; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
