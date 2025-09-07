#include "main.h"

/**
 * rot13 - rotates the string by 13 alphabet spaces
 * @s: the string to evaluate
 *
 * Return: pointer to string s
 */
char *rot13(char *s)
{
	int i, j;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}
		}
	}
	return (s);
}
