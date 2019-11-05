#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all the data
 * @head: Head is the starting node
 * Return: No return
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
