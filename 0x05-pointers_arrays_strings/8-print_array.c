#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array to be printed
 * @n: no. of element to be printed
 */
void print_array(int *a, int n)
{
	int i;
	
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
