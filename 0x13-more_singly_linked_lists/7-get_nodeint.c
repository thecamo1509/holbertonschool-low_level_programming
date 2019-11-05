#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: Head is the starting node
 * @index: This is the index
 * Return: No return
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
		{
			if (head == NULL)
			return (NULL);
			head = head->next;
			i++;
		}
	return (head);
}
