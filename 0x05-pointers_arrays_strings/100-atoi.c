#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_digit = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			found_digit = 1;

			if (sign == 1 && (result > (INT_MAX - digit) / 10))
				return (INT_MAX);
			if (sign == -1 && (result < -(INT_MIN + digit) / 10))
				return (INT_MIN);
		}
		else if (found_digit)
		{
			break;
		}
		else if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s == '+')
		{
			;
		}
		s++;
	}
	return (sign * result);
}
