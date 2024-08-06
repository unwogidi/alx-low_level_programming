#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the head of the list
 * Return: the head node's data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
