#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning
 * @head: Header to the first node
 * @n: The number in the node
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new->prev = NULL;
		temp->prev = new;
		new->next = temp;
		new->n = n;
		*head = new;
	}
	return (new);
}
