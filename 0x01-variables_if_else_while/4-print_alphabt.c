#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if ((a == 'e') || (a == 'q'))
		{
			a++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
