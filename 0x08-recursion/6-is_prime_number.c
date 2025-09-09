#include "main.h"

/**
 * is_prime_number - tests if number is prime
 * @n: number to test
 *
 * Return: 1 if prime, 0 if not or n is less or eq to 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - checks if n is divisible by a no. >1
 * @n: number to check if it's prime
 * @i: educated guess upto √n
 *
 * Return: 1 if prime is found, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
