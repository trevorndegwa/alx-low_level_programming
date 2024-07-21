#include "main.h"
/**
 * _sqrt_recursion - returns natural squareroot of number
 * @n: number to get root of
 *
 * Return: integer root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - returns square root of number
 * @n: number to get square root of
 * @guess: guess number
 *
 * Return: squareroot of n or -1
 */

int _sqrt(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_sqrt(n, guess + 1));
}
