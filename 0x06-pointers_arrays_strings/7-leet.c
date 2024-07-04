#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char leet_map[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char chars[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == chars[j])
			{
				s[i] = leet_map[j];
				break;
			}
		}
	}

	return (s);
}
