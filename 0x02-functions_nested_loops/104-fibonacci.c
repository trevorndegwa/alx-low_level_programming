#include <stdio.h>

/**
 * main - entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2;
	unsigned long a_high, b_high, a_low, b_low;
	unsigned long carry, high, low
	int i;

	/* print first 2 numbers*/
	printf("%lu, %lu", a, b);

	/* generate next up to 92nd safely in unsigned long*/
	for (i = 3; i <= 92; i++)
	{
		b = b + a;
		a = b - a;
		printf(", %lu", b);
	}
	/* split the last a and bs into high and low parts*/
	a_high = a / 1000000000;
	a_low = a % 1000000000;
	b_high = b / 1000000000;
	b_low = b % 1000000000;

	/* cont from 93rd to 98th*/
	for (i = 93, i <= 98, i++)
	{
		carry = (a_low + b_low) / 1000000000;
		low = (a_low + b_low) % 1000000000;
		high = a_high + b_high + carry;

		printf(", %lu%09lu", high, low);

		a_high = b_high;
		a_low = b_low;
		b_high = high;
		a_low = low;
	}
	printf("\n");
	return (0);
}
