#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: n member of elements
 * @size: size in bytes of each
 * Return: pointer to the allocated memory or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, nmemb * size);

	return (arr);
}
