#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at specific index
 * @head: Header to the first node
 * @index: Index to go through
 * Return: The address of the desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
