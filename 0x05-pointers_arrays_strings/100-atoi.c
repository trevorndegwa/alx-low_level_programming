#include "main.h"
/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
/*
*1 We initialize a variable i to 1
2 We initialize a variable num to 0
3 We check if the first character is a minus sign
4 We check if the character is a digit
5 We check if num is greater than 0
6 We return num * i.
*/
/*
*Time Complexity: O(n)
*/
int _atoi(char *s)
{
	int i = 1;

	unsigned int num = 0;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * i);
}
