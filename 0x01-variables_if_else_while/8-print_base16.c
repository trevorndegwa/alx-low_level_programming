#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char numx;

	for (numx = '0'; numx <= '9'; numx++)
		putchar(numx);

	for (numx = 'a'; numx <= 'f'; numx++)
		putchar(numx);

	putchar('\n');

	return (0);
}
