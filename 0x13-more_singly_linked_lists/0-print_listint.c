#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function will print a list of elements
 * @h: This is the list
 * Return: Will return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
