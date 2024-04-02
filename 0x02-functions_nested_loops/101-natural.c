#include <stdio.h>

/**
 * main - entry point
 * void: no external parameters
 * Return: 0 always
 */

int main(void)
{
	unsigned long int sum, sum3, sum5, i;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
