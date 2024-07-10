#include "main.h"
#include <stdio.h>

/**
 * factorial - finds the factorial of a given number
 * @n: an integer
 * Return: an integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
