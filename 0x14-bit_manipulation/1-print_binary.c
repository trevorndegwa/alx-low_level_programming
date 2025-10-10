#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints the binary representation of a num
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
	if (!started)
		_putchar('0');
}
