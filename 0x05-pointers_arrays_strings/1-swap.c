#include "main.h"
/**
 *swap_int - swaps 2 integers
 *@a: first integer
 *@b: second integer
 *Return: nothing
 */

/*
*1. Function called swap_int takes 2  pointers to ints as arguments
2. Declare a variable tmp of type int
3. Assign the value of the first pointer to tmp
4. Assign the value of the second pointer to the first pointer
5. Assign the value of tmp to the second pointer
*/
/*
*Time Complexity: O(1)
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
