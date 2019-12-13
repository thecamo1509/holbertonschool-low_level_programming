#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the beginning
 * @head: Header to the first node
 * @n: The number in the node
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	temp->next = new;
	}
	return (new);
}
