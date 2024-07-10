#include <stdio.h>
#include "main.h"

/**
 * _sqrt_find - find the square root recursively
 * @n: the number to find the square root of
 * @i: the current divisor to check
 * Return: square root of n, or -1 if it does not have one
 */
int _sqrt_find(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return _sqrt_find(n, i + 1);
}


/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: an integer
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_find(n, 1));
}
