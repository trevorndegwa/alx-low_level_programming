#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string then new line
 * @s: character to be printed
 * Return: returns void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
