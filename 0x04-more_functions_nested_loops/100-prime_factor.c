#include <stdio.h>
/**
 * main - entry
 * @void: no argument
 * Return: Always 0
 */
int main(void)
{
	long j, num = 612852475143;

	for (j = 2; j <= num; j++)
	{
		if (num % j == 0)
		{
			num = num / j;
			j--;
		}
	}
	printf("%lu\n", j);
	return (0);
}
