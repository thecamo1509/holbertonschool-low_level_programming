#include "lists.h"
/**
* reverse_listint - Function that reverses a list
* @head : Start of the list
* Return: Pointer to the starting node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *sig;

	if (*head == NULL)
	return (NULL);

	prev = *head;
	sig = prev->next;

	if (sig == NULL)
	return (*head);
	sig = reverse_listint(&sig);
	prev->next->next = prev;
	prev->next = NULL;
	*head = sig;
	return (*head);
}
