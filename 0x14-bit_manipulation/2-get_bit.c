#include "main.h"

/**
 * get_bit - function returns the bit value at a certain index
 * @n: the number
 * @index: the index
 *
 * Return: the value of a bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	n = n & (1UL << index);
	i = (int)(n >> index);
	return (i);
}
