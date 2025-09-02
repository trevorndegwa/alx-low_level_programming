#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int largest = 0;
	long int i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 2)
		largest = n;
	printf("%ld\n", largest);
	return (0);
}
