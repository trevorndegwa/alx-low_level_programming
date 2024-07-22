#include "main.h"
/**
*_strcpy - Copy paste String
*@dest: destination
*@src: source
*Return: dest
*/

/*
*1 The function takes two arguments
2 The function returns a pointer to a char (a string)
3 The function copies the string pointed to by src
4 The strings may not overlap and the destination string dest must adequate
5 The function returns a pointer to the destination string dest.
*/
/*
*Time Complexity: O(n)
*/
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
