#include <stdio.h>

/**
 * main - entry point
 * void: no external parameters
 * Return: 0 always
 */
int main(void)
{
	unsigned long int n1, n2, n3, i, sum;

	sum = 0;
	n1 = 1;
	n2 = 2;

	for (i = 0; ; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		if (n1 < 4000000 && (n1 % 2) == 0)
		{
			sum = sum + n1;
		}
		else if (n1 >= 4000000)
			break;
	}
	printf("%lu\n", sum);
	return (0);
}
