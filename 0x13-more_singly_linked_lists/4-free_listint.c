#include "lists.h"
/**
 * free_listint - This function will free a list
 * @head: This is the list
 * Return: Will return the number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *var;

	while (var != NULL)
	{
		free(head->n);
		free(head);
		head = var->next;
		var = var->next;
	}
	free(head);
}
