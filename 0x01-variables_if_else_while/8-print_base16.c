#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	char b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
