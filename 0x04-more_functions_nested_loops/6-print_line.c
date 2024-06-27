#include "main.h"

/**
 * print_line - draws a striaght line in the terminal
 * @n: number of _
 * Return: 0 Success
 */

void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
