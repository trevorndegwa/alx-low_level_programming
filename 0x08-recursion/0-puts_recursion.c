#include "main.h"

/**
 * _puts_recursion - functions prints string folowed by new line
 * @s: input string to print
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
