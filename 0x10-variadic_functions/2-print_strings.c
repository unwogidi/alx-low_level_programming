#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings,followed by a new line
 * @separator: string to be printed between string
 * @n: number of strings passed to the function
 * @...: variable parameter
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;
	char *str;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(mylist, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(mylist);
	printf("\n");
}
