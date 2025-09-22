#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string for the name to print
 * @f: function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
