#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the destination buffer
 * @src: the source string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr++ = *src++;
	}
	*dest_ptr = '\0';

	return (dest);
}
