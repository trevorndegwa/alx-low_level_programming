#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int c, a;

	for (c = 0; c < 10; c++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
