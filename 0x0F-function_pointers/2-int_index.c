#include "function_pointers.h"

/**
 * int_index - looks for integer
 * @array: element-containing array
 * @size: element quantity
 * @cmp: function to compare values
 *
 * Return: pointer to 1st corresponding elemen
 * -1 if no element matches or when size < 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
