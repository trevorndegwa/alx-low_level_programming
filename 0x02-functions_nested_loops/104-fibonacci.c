#include <stdio.h>

/**
 * main - entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a_low = 1, b_low = 2;
	unsigned long a_high = 0, b_high = 0;
	unsigned long carry, high, low;
	int count;
	const unsigned long BASE = 1000000000UL;

	/* print first 2 numbers*/
	printf("1, 2");

	for (count = 3; count <= 98; count++)
	{
		/* add the low parts */
		low = a_low + b_low;
		carry = low / BASE;
		low = low % BASE;

		/* add the high parts + carry */
		high = a_high + b_high + carry;

		if (high > 0)
			printf(", %lu%09lu", high, low);
		else
			printf(", %lu", low);

		/* move to next */
		a_high = b_high;
		a_low = b_low;
		b_high = high;
		b_low = low;
	}
	printf("\n");
	return (0);
}
