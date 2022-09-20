#include "main.h"

/**
 * rev_string - reverses a string
 * @s: value to be evaluated
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *x = s;
	int f = 0;
	int y;
	char c;

	while (*x != '\0')
	{
		x++;
		len++;
	}
	l = len - 1;
	for ( ; f < ((l / 2) + 1) ; f++)
	{
		y = (l - f);
		c = s[f];
		s[f] = s[y];
		s[y] = c;
	}
}
