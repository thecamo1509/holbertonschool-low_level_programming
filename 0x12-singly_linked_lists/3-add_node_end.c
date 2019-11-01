#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of the list
 * @head: Head is the starting node
 * @str: The string to duplicate in the node
 * Return: the address of the new node or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *var;
	list_t *var2 = *head;

	var = malloc(sizeof(list_t));
	if (var == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	var->len = i;
	var->str = strdup(str);
	var->next = NULL;

	if (*head == NULL)
	{
		*head = var;
	}
	else
	{
		while (var2->next != NULL)
		{
			var2 = var2->next;
		}
		var2->next = var;
	}
	return (var);
}
