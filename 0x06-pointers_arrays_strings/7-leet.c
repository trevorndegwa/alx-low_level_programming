#include "main.h"

/**
*leet - Encodes a string to 1337
*@c: String of variable pointr
*Return: String that's encoded
*/

char *leet(char *c)
{
	char *pc = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (pc);
}
