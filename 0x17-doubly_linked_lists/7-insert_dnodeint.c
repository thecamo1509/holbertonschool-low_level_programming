#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at specific index
 * @head: Header to the first node
 * @index: Index to go through
 * Return: The address of the desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}

/**
 * insert_dnodeint_at_index - Inserts new node at certain index
 * @h: Header to the first node
 * @idx: Index
 * @n: Data inside the new node
 * Return: The sum of n in the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (h == NULL || new == NULL)
		return (NULL);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	temp = get_dnodeint_at_index(*h, idx);
	if (temp == NULL)
		return (NULL);
	new->next = temp;
	new->prev = temp->prev;
	temp->prev = new;
	temp = new->prev;
	temp->next = new;
	new->n = n;
	return (new);
}

