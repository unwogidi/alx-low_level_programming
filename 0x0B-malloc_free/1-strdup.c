#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a pointer to a string
 * Return: NULL if str = NULL
 *         a pointer to the duplicate string on success
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, size;
	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	dup[size] = '\0';

	return (dup);
}
