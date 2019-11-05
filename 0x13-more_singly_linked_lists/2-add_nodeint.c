#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - This function will return number of elements
 * @head: This is the list
 * @n: This is the n
 * Return: Will return the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *var;

	var = malloc(sizeof(listint_t));
	if (var == NULL)
	{
		return (NULL);
	}
	var->n = n;
	var->next = *head;
	*head = var;
return (var);
}
