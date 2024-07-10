#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse by recursive method
 * @s: string to be processed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
