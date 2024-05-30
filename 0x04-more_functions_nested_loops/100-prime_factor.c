#include <stdio.h>
#include <math.h>

/**
 * is_prime - fxn checks if a number is prime
 * @n: integer
 * Return: Always 0
 */

int is_prime(long n)
{
	long int i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - checks biggest prime
 * @n: integer
 * Return: Always 0
 */

long largest_prime_factor(long n)
{
	long max_prime = -1;
	long int i;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max_prime = n;
	}

	return (max_prime);
}

/**
 * is_prime - checks for prime number
 * largest_prime_factor - checks for largest prime
 *
 * main - entry point of program
 *
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);
	return (0);
}
