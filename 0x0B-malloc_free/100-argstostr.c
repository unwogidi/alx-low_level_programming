#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
