#include <stdio.h>

/**
 * main - program prints alphabet in reverse
 *
 * Return: return 0
 */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
