#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*
* print the size of a char using the sizeof() operator
* print the size of an int using the sizeof() operator
* print the size of a long int using the sizeof() operator
* print the size of a long long int using the sizeof() operator
* print the size of a float using the sizeof() operator
*/
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
