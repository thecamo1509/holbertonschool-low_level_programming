#include "lists.h"
/**
 * free_listint2 - free the entire list
 * @head: Head is the starting node
 * Return: No return
 */

void free_listint2(listint_t **head)
{
	listint_t *var;

	if (head)
	return;
	while (*head)
	{
		var = (*head)->next;
		free(head);
		*head = var;
	}
	*head = NULL;
}
