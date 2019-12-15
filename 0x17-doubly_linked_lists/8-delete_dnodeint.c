#include "lists.h"
/**
 * longi - Get list long
 * @head: Header to the first node
 * Return: The long of the list
 */
unsigned int longi(dlistint_t *head)
{
	unsigned int i = 0;

	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
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
 * Return: 1 if success or -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (temp->next == NULL && index == 0)
	{
		free(*head);
		*head = NULL;
		return (-1);
	}
	i = longi(temp);
	if (index > i)
		return (-1);
	if (index == 0)
	{
		temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	if (i == index)
	{
		temp = get_dnodeint_at_index(*head, index);
		temp->prev->next = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}
	temp = get_dnodeint_at_index(*head, index);
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	temp->prev = NULL;
	temp->next = NULL;
	free(temp);
	temp = NULL;
	return (1);
}