#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @num: a number
 * Return: a digit success
 */
int print_last_digit(int num)
{
int last_digit;

last_digit = num % 10;

if (last_digit < 0)
{
last_digit = -last_digit;
}

_putchar(last_digit + '0');
return (last_digit);
}
