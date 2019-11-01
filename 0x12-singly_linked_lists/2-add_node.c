#include "lists.h"
/**
 * add_node - function that adds a new node at the start of the list
 * @head: Head is the starting node
 * @str: The string to duplicate in the node
 * Return: the address of the new node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *var;

	var = malloc(sizeof(list_t));
	if (var == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)

	var->len = i;
	var->str = strdup(str);
	var->next = *head;

	*head = var;
	return (var);
}