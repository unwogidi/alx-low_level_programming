#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i, j, num;
	char buffer[20];

	for (i = 0; i < n; i++)
	{
		num = a[i];
		j = 0;
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		do {
			buffer[j++] = (num % 10) + '0';
			num /= 10;
		} while (num > 0);
		while (j--)
		{
			_putchar(buffer[j]);
		}
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	putchar('\n');
}
