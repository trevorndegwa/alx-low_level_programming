#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (no. of rows/columns)
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i]; /* Main diagonal */
		sum2 += a[i * size + (size - 1 - i)]; /* Secondary diagonal */
	}
	printf("%d, %d\n", sum1, sum2);
}
