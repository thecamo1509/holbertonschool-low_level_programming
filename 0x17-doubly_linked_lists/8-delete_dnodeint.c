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
/**
 * delete_dnodeint_at_index - Delete node at a specific index
 * @head: Header to the first node
 * @index: Index to go through
 * Return: The address of the desired node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (temp)
	{
		if (temp->next == NULL && temp->prev == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		if (temp->next != NULL && temp->prev == NULL && index == 0)
		{
			temp = temp->next;
			free(temp->prev);
			temp->prev = NULL;
			*head = temp;
			return (1);
		}
		while (temp)
		{
			temp = temp->next;
			i++;
		}
		if (i == index)
		{
			temp = get_dnodeint_at_index(*head, index);
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		temp = get_dnodeint_at_index(*head, index);
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}