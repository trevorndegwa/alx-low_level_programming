#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * description - prints _putchar, then new line
 *
 * Return: Always 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}
