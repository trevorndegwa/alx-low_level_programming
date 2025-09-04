#include <stdio.h>

/**
 * swap_int - swaps int params
 * @a: 1st param
 * @b: end param
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	a = *b;
	b = z;
}
