#include <stdio.h>

/**
 * main - entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, c, sum = 0;

	while (b <= 4000000)
	{
		if ((b % 2) == 0)
			sum = sum + b;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
