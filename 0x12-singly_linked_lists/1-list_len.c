#include "lists.h"

/**
 * list_len - Counts the list elements
 * @h: Single linked list
 * Return: Will return the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
