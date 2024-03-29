#include "main.h"
/**
*_puts - prints a string
*@str: string to print
*
*Description: prints a string
*On Success: return the number of characters printed
*/

/*
*1 Function called _puts that takes a pointer to a char as a parameter
2 Create a while loop that will until null byte
3 Inside the while loop call the _putchar function
4 After the while loop print a new line
*/
/*
*Time Complexity: O(n)
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
