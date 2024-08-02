#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list_t list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t elem_count = 0;

	while (h)
	{
		elem_count++;
		h = h->next;
	}

	return (elem_count);
}
