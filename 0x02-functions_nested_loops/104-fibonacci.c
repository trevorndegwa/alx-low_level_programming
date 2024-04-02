#include <stdio.h>

/**
 * main - program prints 98 fibonacci digits
 * void: no external parameters
 * Return: 0 always
 */

int main(void)
{
	unsigned long int i, n1, n2, n3;

	n1 = 1;
	n2 = 2;

	for (i = 0; i < 98; i++)
	{
		if (i == 97)
		{
			printf("%lu\n", n1);
		}
		else
		{
			printf("%lu, ", n1);
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
