#include <stdio.h>
/**
 * main - prints no. of arguments passed to it
 * @argc: no. of arguments
 * @argv: array of argument strings
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	while (argc > 0)
	{
		if (argc > 1)
		{
			printf("%d\n", argc - 1);
			break;
		}
		else
		{
			printf("0\n");
			break;
		}
	}
	return (0);
}
