#include "lists.h"
/**
 * free_dlistint - Function to free list
 * @head: Header to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;


	while(temp->next)
	{
		temp = temp->next;
	}
	while(temp->prev)
	{
		temp = temp->prev;
		free(temp->next);
	}
	free(temp);
}