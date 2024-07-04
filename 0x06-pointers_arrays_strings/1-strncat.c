#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes from src
 * @dest: destination
 * @src: source string
 * @n: maximum number of bytes to be appended from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_start);
}
