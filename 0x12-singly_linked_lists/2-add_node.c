#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return: the length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * _strdup - duplicates a string by allocating memory and copy the content
 * @s: the string
 * Return: pointer to the newly allocated string, or NULL if it failed
 */
char *_strdup(const char *s)
{
	char *dup;
	unsigned int len, i;

	len = _strlen(s);
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = s[i];
	}
	dup[len] = '\0';

	return (dup);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list_t list
 * @str: string to be duplicated and added to the new node
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int str_len;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Duplicate the string and check if allocation was successful */
	str_dup = _strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* set the new node's fields */
	str_len = _strlen(str_dup);
	new_node->str = str_dup;
	new_node->len = str_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
