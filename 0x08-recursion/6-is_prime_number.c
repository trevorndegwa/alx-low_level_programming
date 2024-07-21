#include "main.h"
/**
 * is_prime_number - function that checks if n is prime
 * @n: number to test
 * Return: int value
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - recursively checks if n is prime
 * @n: number to check
 * @divisor: divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));
}
