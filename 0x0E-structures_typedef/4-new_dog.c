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

	/* Allocate memory for the dog structure */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory and copy the name */
	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	/* Allocate memory and copy the owner */
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
