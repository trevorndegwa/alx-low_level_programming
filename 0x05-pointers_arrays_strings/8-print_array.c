#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array content
 * @a: value to be evaluated
 * @n: value to be evaluated
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
