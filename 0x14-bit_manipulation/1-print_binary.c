#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (i > 0)
	{
		if (n & i)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		i >>= 1;
	}

	if (!started)
	{
		_putchar('0');
	}
}
