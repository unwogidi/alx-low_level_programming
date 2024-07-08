#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prifix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		s++;
	}
	return (count);
}
