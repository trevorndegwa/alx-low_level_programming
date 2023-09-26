#include "main.h"
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
		size_t to_len = strlen(to);

		strncpy(*s, to, to_len);
		(*s)[to_len] = '\0';
	}
	else
	{
	/*branch not necessary*/
	}
}
