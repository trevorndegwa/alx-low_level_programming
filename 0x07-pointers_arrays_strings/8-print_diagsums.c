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
	int i = 0, j = 0, sum_11 = 0, sum_22 = 0;

	for (; i < size * size; i += size)
	{
		sum_11 += a[i + j];
		sum_22 += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", sum_11, sum_22);
}
