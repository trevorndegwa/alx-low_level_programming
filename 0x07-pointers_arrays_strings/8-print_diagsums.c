#include <main.h>
#include <stdio.h>
/**
 * print_diagsums - this function prints the sum of 2 diagonals for
 * a square matrix of integers
 * @a: 2-D array
 * @size: size x size - the square matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum11;

	sum = 0;
	sum11 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum11 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum11);
}
