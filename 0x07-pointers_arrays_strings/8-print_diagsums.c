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
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += a[j];
		a += size;
	}

	a -= size;

	for (j = 0; j < size; j++)
	{
		sum2 += a[j];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
