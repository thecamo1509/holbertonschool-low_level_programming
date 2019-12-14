#include "lists.h"
/**
 * sum_dlistint - Function to sum nodes
 * @head: Header to the first node
 * Return: The sum of n in the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if(idx == 0)
		return(add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (temp)
	{
		if (i == idx && temp->next == NULL)
			return(add_dnodeint_end(h, n));
		else
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev = new;
			temp = new->prev;
			temp->next = new;
		}
		temp = temp->next;
		i++;
	}
	return(new);
}

