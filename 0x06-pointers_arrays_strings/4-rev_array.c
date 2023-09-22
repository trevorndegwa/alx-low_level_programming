#include "main.h"

/**
*reverse_array - function that reverse content of array
*@b: array
*@n: number of elements
*/

void reverse_array(int *b, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
	tmp = b[n - 1 - index];
	b[n - 1 - index] = b[index];
	b[index] = tmp;
	}
}
