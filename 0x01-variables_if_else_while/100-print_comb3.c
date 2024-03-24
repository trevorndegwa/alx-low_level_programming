#include <stdio.h>

/**
 * main - prints combination of 2 digit numbers
 *
 * Return: return 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
