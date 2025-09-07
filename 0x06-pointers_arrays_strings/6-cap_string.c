#include "main.h"

/**
 * cap_string - capitalises all words of a str
 * @str: the string
 *
 * Return: pointer to the str
 */
char *cap_string(char *str)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j]
				&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (str);
}
