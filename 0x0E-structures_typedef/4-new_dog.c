#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */

int _strlen(char *s)
{
        int length = 0;

        while (s[length] != '\0')
        {
                length++;
        }
        return (length);
}

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
	dog = malloc(sizeof(dog_t *));
	if (dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory and copy the name */
	copyOfName = malloc(_strlen(name) + 1);
	if (copyOfName == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(copyOfName, name);

	/* Allocate memory and copy the owner */
	copyOfOwner = malloc(_strlen(owner) + 1);
	if (copyOfOwner == NULL)
	{
		free(copyOfName);
		free(dog);
		return (NULL);
	}
	_strcpy(copyOfOwner, owner);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
