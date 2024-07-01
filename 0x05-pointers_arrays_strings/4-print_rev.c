#include "main.h"
#include <unistd.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}


/**
 * print_rev - prints a string in reverse with a new line
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int length = _strlen(s);

	while (length--)
	{
		write(1, &s[length], 1);
	}
	write(1, "\n", 1);
}
