#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string by recursive method
 * @s: string to be processed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
