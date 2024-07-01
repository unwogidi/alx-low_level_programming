#include "main.h"
#include <unistd.h>

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
