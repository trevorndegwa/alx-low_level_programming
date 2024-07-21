#include "main.h"
/**
 * is_palindrome - returns 1 if string is palindrome
 * @s: the string to check
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - checks if a substring is a palindrome
 * @s: string to check
 * @start: starting index of string
 * @end: its ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
