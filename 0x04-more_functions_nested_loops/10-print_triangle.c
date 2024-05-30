#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: dictates the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (int k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
