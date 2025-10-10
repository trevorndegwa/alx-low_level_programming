#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function coverts a binary number to an unsigned int
 * @b: string of 0 & 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = (num << 1) + (*b - '0');
		b++;
	}
	return (num);
}
