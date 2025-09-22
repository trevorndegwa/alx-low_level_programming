#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each array element
 * @array: the array
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
