#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character in a string
 * Return: a pointer to the first occurance of the character
 * or NULL if the charater is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
