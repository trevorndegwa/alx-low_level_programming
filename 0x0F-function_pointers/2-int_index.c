#include "function_pointers.h"

/**
 * int_index - function searches for an integer in an array
 * @array: the array
 * @size: no. of elements in the array
 * @cmp: function pointer to a func that compares values
 *
 * Return: index of the matching element or -1 if unsuccessful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res == 0)
			;
		else
			return (i);
	}
}
