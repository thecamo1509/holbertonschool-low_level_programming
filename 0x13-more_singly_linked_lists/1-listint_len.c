#include "lists.h"
#include <stdio.h>
/**
 * listint_len - This function will return number of elements
 * @h: This is the list
 * Return: Will return the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
