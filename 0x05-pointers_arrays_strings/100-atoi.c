#include "main.h"

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

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
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
}
