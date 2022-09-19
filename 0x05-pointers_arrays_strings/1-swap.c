#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @n: stores value
 *
 * @a: value to swap
 *
 * @b: value to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
