#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t node_count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;

	while (current != NULL)
	{
		node_count++;
		if (current <= current->next)
		{
			*h = NULL;
			return (node_count);
		}
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (node_count);
}
