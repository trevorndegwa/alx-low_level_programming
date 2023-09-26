#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - func sets pointer to char
 * @s: string
 * @to: char
 */

void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
	}

	*s = (char *)malloc(strlen(to) + 1;
			if (*s != NULL)
			{
				strcpy(*s, to);
			}
}
