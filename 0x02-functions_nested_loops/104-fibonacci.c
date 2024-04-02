#include <stdio.h>

/**
 * main - program prints 98 fibonacci digits
 * void: no external parameters
 * Return: 0 always
 */

int main(void)
{
	unsigned long int i, n1, n1a, n1b, n2, n2a, n2b, n3;

	n1 = 1;
	n2 = 2;

	for (i = 0; i < 92; i++)
	{
		if (i == 91)
		{
			printf("%lu", n1);
		}
		else
		{
			printf("%lu, ", n1);
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}

	n1a = n1 / 1000000000;
	n1b = n1 % 1000000000;
	n2a = n2 / 1000000000;
	n2b = n2 % 1000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", n2a + (n2b / 1000000000));
		printf("%lu", n2b % 1000000000);
		n2a = n2a + n1a;
		n1a = n2a - n1a;
		n2b = n2b + n1b;
		n1b = n2b - n1b;
	}
	printf("\n");
	return (0);
}
