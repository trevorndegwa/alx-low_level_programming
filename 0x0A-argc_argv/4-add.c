#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers in command line
 * @argc: no. of arguments
 * @argv: array of argument strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count, i, sum;

	sum = 0;

	while (argc > 0)
	{
		if (argc == 1)
		{
			printf("0\n");
			break;
		}
		else
		{
			for (count = 2; count < argc; count++)
			{
				i = atoi(argv[count]);

				if (i <= 9 && i >= 0)
				{
					sum += i;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	return (0);
}
