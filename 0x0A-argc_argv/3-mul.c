#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 integers given as CL arguments
 * @argc: no. of CL arguments
 * @argv: the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	long int i, j, product;

	while (argc > 0)
	{
		if (argc == 1 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			i = atoi(argv[1]);
			j = atoi(argv[2]);
			product = i * j;
			printf("%ld\n", product);
			break;
		}
	}
	return (0);
}
