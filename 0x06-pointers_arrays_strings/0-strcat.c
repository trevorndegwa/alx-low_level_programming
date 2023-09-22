#include "main.h"

/**
* _strcat - concatenates the string pointed to
*@dest: String that will append
*@src: string that will be concatenated upon
*
* Return: returns pointer to @dest
*/

/*
*1. We declare a function called _strcat that takes two arguments: dest and src
2.  Declare two variables: index and dest_len
3.  Use a while loop to iterate through the dest string and find its length
4.  Use a for loop to iterate through the src string
5.  Finall return the dest string
*/
/*
*Time Complexity: O(n)
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
