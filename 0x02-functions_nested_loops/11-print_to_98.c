#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural nos. from n - 98
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d\n", n);
}
