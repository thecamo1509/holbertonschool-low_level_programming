#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - This function will return the address of the element
 * @head: This is the list
 * @n: This is the value
 * Return: Will return the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *var;
	listint_t *temp = *head;

	var = malloc(sizeof(listint_t));
	if (var == NULL)
	{
		return (NULL);
	}
	var->n = n;
	var->next = NULL;
	if (*head == NULL)
	{
		*head = var;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = var;
	}
	return (var);
}
