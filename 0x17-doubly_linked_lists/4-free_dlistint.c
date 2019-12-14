#include "lists.h"
/**
 * free_dlistint - Function to free list
 * @head: Header to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;


	while (temp)
	{
		free(head);
		head = temp->next;
		temp = temp->next;
	}
	free(head);
}
