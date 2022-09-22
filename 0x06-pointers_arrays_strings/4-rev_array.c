#include "main.h"
/**
 * reverse_array - reverse integer array
 * @a: array
 * @n: array number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int j;
	int temp;

	for (j = 0; j < n--; j++)
	{
		temp = a[j];
		a[j] = a[n];
		a[n] = temp;
	}
}
