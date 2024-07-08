#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string to be scanned
 * @needle: the small string to be searched within haystack
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
