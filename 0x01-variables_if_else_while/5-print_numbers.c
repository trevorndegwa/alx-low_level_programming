#include <stdio.h>

/**
 * main - entry point of a program
 * Return: 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
