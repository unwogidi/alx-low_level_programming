#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		/* store the next node */
		next = (*head)->next;

		/* reverse the current node's pointer */
		(*head)->next = prev;

		/* move the pointers one position forward */
		prev = *head;
		*head = next;
	}

	/* update the head to the new front of the list */
	*head = prev;

	return (*head);
}
