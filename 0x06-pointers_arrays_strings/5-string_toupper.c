#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: the string
 *
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			;
		}
	}
	return (str);
}

/**
 * _strlen - gives lengths of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len = len + 1;
	}
	return (len);
}
