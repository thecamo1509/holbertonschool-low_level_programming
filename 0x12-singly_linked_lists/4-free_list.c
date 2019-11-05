#include "lists.h"
/**
 * free_list - free the entire list
 * @head: Head is the starting node
 * Return: No return
 */
void free_list(list_t *head)
{
	list_t *var = head;

	while (var != NULL)
	{
		free(head->str);
		free(head);
		head = var->next;
		var = var->next;
	}
	free(head);
}
