#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of a program
 * @argc: no. of arguments to prog
 * @argv: array of pointers to string
 *
 * Return: EXIT_SUCCESS 4 success, EXIT_FAILURE 4 failure
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
