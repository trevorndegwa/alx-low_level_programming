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
	int index, sum11 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum11 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum11, sum2);
}
