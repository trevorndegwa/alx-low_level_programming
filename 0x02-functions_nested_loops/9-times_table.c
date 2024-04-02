#include "main.h"
#include <stdio.h>

/**
 * times_table - function prints 9x table
 * @void: void parameters
 * Return: null
 */

void times_table(void)
{
	int j, k, l;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			l = k * j;
			if (k != 9)
			{
				_putchar((l) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((l) + '0');
				_putchar('$');
				_putchar('\n');
			}
		}
	}
}