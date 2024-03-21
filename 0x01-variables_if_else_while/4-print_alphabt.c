#include <stdio.h>

/**
 * main - program prints lowercase execept q & e
 *
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		else
			continue;
	}
	putchar('\n');
	return (0);
}
