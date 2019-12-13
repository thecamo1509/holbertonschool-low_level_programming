#include "lists.h"
/**
 * sum_dlistint - Function to sum nodes
 * @head: Header to the first node
 * Return: The sum of n in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return(0);
	while (temp->next)
		{
			temp = temp->next;
			sum += temp->n;
		}
	return(sum);
}
