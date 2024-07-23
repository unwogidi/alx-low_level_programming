#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to the dog structure
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		else if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
