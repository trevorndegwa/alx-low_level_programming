#include <stdio.h>

/**
 * main - program prints first 50 fib seq starting with 1 & 2
 * void: no external parameters
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int i, n1, n2, n3;

	n1 = 1;
	n2 = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%lu", n1);
		}
		else
		{
			printf("%lu, ", n1);
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
	}
	printf("\n");
	return (0);
}
