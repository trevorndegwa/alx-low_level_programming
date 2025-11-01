#include "main.h"

/**
 * flip_bits - returns the no. of bits to flip to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: no. of bits that differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
			count++;
		diff = diff >> 1;
	}
	return (count);
}
