#include <stdio.h>

/**
 * main - program prins base 16 no.s in lowercase
 *
 * Return: return 0
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}

	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
