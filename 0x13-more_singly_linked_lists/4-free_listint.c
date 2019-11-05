#include "lists.h"
/**
 * free_listint - This function will free a list
 * @head: This is the list
 * Return: Will return the number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *var;

	while (head != NULL)
	{
		var = head->next;
		free(head);
		head = var;
	}
	free(head);
}
