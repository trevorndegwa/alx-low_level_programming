#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: no. of arguments
 * @argv: array of pointers
 *
 * Return: EXIT_SUCCESS 4 success, EXIT_FAILURE 4 failure
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
