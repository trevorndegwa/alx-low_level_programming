#include "main.h"
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
	int priC, sum1, sum2, diagC1, diagC2, row;

	priC = 0, sum1 = 0, sum2 = 0, diagC1 = 0, diagC2 = 0, row = 0;
	while (priC < size * size)
	{
		if (priC == diagC1 + (row * size))
			sum1 += a[primC];
		if (priC == (size - diagC2 - 1) + (row * size))
			sum2 += a[priC];
		if (((priC + 1) % size) == 0)
			row++, diagC1++, diagC2++;
		priC++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
