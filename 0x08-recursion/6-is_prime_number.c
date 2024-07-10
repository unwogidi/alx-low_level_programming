#include <stdio.h>
#include "main.h"

/**
 * is_prime_helper - Helper function to check for prime number recursively
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - input integer is a prime number, otherwise
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_helper(n, 2));
}
