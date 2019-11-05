#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node at a given pos
 * @head: Head is the starting node
 * @idx: Index
 * @n: value of int
 * Return: The new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *store = *head;
	listint_t *store2;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);
	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	if (store != NULL)
	{
		while (i < idx - 1)
		{
			if (store == NULL)
			return (NULL);
			store = store->next;
			i++;
		}
		if (store == NULL)
			return (NULL);
		store2 = store->next;
		store->next = newnode;
		newnode->n = n;
		newnode->next = store2;
	}
	return (newnode);
}
