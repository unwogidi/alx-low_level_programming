#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a structure that stores dog details
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *copyOfName, *copyOfOwner;

	/* Allocate memory for the dog structure */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory and copy the name */
	copyOfName = malloc(strlen(name) + 1);
	if (copyOfName == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(copyOfName, name);

	/* Allocate memory and copy the owner */
	copyOfOwner = malloc(strlen(owner) + 1);
	if (copyOfOwner == NULL)
	{
		free(copyOfName);
		free(dog);
		return (NULL);
	}
	strcpy(copyOfOwner, owner);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
