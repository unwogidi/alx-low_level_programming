#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - recursively prints the length of a string
 * @s: string to be processed
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
