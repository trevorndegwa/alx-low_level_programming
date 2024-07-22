#include "main.h"
#include <stdio.h>

/**
 * _isalpha - function checks for alphabet chars
 * @c: variable name
 * Return: 1 if alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
