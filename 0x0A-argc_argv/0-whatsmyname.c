#include <stdio.h>

/**
 * main - print program name then new line
 *
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
