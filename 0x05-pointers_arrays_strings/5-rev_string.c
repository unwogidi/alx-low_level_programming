#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * rev_string - reverses a string in place
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int i;
	int temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
