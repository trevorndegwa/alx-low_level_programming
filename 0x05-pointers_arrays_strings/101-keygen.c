#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int x;

	srand(time(0));    /* seed random number generator with current time */
	while (x <= 2645)  /* generate chars until sum gets close to 2772 */
	{
		c = rand() % 128; /* random ASCII char (0–127) */
		x += c;           /* add to running total */
		putchar(c);       /* print the character */
	}
	putchar(2772 - x); /* final char balances the sum to 2772 */
	return (0);
}

