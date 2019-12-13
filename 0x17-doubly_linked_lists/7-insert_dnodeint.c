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
	unsigned int i = 0, j = 0;

	if (h == NULL)
	{
		printf("%d",temp->n);
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	temp = *h;
	new->n = n;
	if (idx < i)
	{
		while(j < idx)
		{
			temp = temp->next;
		}
		new->next = temp;
		new->prev = temp->prev;
		temp->prev = new;
		temp = new->prev;
		temp->next = new;
	}
	return(new);
}
