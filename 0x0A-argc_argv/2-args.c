#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point of a program
 * @argc: number of arguments to program
 * @argv: array of string args
 *
 * Return: EXIT_SUCCESS 4 success, EXIT_FAILURE 4 failure
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
