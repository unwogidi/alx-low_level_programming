#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 * Return: 1 if palindrome
 *         0 if otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome
 *         0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}
