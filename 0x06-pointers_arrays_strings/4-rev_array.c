#include "main.h"

/**
 * reverse_array - reverses contents of an array of ints
 * @a: the array
 * @n: no. of ints in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;
	for (i = 0; i <= n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = a[i];
		n--;
	}
}
