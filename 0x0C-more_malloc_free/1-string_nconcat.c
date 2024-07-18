#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes the determines the length of the second string
 *     to be included
 * Return: A pointer to the newly allocated memory or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strs;
	unsigned int len1, len2, len_strs, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	len_strs = len1 + n;
	strs = malloc(sizeof(char) * (len_strs + 1));

	if (strs == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		strs[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		strs[i] = s2[j];
		i++;
	}

	strs[len1 + n] = '\0';
	return (strs);
}
