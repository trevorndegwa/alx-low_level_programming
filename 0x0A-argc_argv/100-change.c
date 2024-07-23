#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min no. of coins for change for some money
 * @argc: no. of CL arguments
 * @argv: array of CL arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, cents, coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / coin_values[i];
		cents = cents % coin_values[i];
	}
	printf("%d\n", coins);
	return (0);
}
