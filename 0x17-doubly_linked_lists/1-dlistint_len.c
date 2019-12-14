#include "lists.h"
/**
 * dlistint_len - This function will print elements
 * @h: Header to the firs node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);
	if (h->next)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}
	h = temp;
	if (h->prev)
	{
		while (h)
		{
			h = h->prev;
			i++;
		}
	}
	return (i);
}
