#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of a program
 * @argc: number of args to program
 * @argv: array of argument strings
 *
 * Return: EXIT_SUCCESS 4 success, EXIT_FAILURE 4 failure
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	exit(EXIT_SUCCESS);
}
