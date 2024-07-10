#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - finds the value of x raised to the power of y
 * @x: an integer
 * @y: power of the integer
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
