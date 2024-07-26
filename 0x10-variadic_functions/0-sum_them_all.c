#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: n number of parameters
 * Return: sum of parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;
	int calc = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		calc += va_arg(mylist, int);
	}
	va_end(mylist);

	return (calc);
}
