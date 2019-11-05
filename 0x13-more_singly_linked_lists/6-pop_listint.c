#include "lists.h"
/**
 * pop_listint - Deleting a node
 * @head: Head is the starting node
 * Return: No return
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *var;

	if (*head == NULL)
	return (0);
	if (*head != NULL)
	{
		i = (*head)->n;
		var = *head;
		*head = var->next;
		free(var);
	}
	return (i);
}
