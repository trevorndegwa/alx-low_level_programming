#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* for isdigit */

/**
 * main - entry point of a program
 * @argc: number of args to prog
 * @argv: array of pointers
 *
 * Return: EXIT_SUCCESS on success,
 *	   EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc <= 1)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
