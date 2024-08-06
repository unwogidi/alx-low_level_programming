#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node starting at 0
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* Traverse the list up to the index */
	while (head != NULL)
	{
		if (i == index)
		{
			/* Return the node if it is found */
			return (head);
		}

		head = head->next;
		i++;
	}

	/* Return NULL if the node does not exist */
	return (NULL);
}
