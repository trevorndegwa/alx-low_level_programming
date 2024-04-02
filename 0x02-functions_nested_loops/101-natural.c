#include <stdio.h>

/**
 * main - entry point
 * void: no external parameters
 * Return: 0 always
 */

int main(void)
{
	unsigned long int sum = 0;
	unsigned long int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
