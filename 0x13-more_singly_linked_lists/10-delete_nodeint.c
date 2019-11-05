#include "lists.h"
/**
 * delete_nodeint_at_index - Function that inserts a new node at a given pos
 * @head: Head is the starting node
 * @index: Index
 * Return: 1 if succeded or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store = *head;
	listint_t *store2;
	unsigned int i = 0;

	if (index == 0 && *head != NULL)
	{
		*head = (*head)->next;
		free(store);
		return (1);
	}
	if (store != NULL)
	{
		while (i < index - 1)
		{
			if (store == NULL)
			return (-1);
			store = store->next;
			i++;
		}
		if (store == NULL)
			return (-1);
		store2 = store->next;
		store->next = store2->next;
		free(store2);
	}
	return (1);
}
