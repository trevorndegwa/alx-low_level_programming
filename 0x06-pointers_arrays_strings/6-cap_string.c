#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @n: input a value
 *
 * Return: string
 */
char *cap_string(char *n)
{
	int j;

	j = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (j = 0; n[j] != '\0'; j++)
	{
		switch (n[j])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[j + 1] > 96 && n[j + 1] < 123)
				{
					n[j + 1] = n[j + 1] - 32;
				}
		}
	}
	return (n);
}
