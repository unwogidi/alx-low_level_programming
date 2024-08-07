#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-' && !started)
		{
			sign *= -1;
		}
		else if (*s == '+' && !started)
		{
			/* ignore the plus sign */
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				/* Overflow condition */
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}

	return (sign * result);
}
