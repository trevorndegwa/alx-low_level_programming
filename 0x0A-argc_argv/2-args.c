#include <stdio.h>
/**
 * main - prints all arguments to main
 * @argc: no. of arguments to main
 * @argv: array containing strings for arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
