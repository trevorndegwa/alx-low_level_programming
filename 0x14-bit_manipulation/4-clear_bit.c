#include "main.h"

/**
 * clear_bit - function sets the value at a given index of a num to 0
 * @n: the number
 * @index: the index
 *
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
