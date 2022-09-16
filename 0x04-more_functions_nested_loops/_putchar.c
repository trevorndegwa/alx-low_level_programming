#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 *
 * @c: character to be printed
 *
 * Return: 1, if successful, and -1 with error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
