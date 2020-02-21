#include "hash_tables.h"
/**
 * add_node - function that adds a new node at the start of the list
 * @head: Head is the starting node
 * @key: The key to be added in the node
 * @value: The corresponding value of the key
 * Return: the address of the new node or NULL if it fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *var;

	var = malloc(sizeof(hash_node_t));
	if (var == NULL)
		return (NULL);
	var->key = strdup(key);
	var->value = strdup(value);
	var->next = *head;

	*head = var;
	return (var);
}
/**
 * hash_table_set - Function that adds element to the hash table
 * @ht: pointer to the hash table
 * @key: The key to be looked for in the array
 * @value: The value to the key.
 * Return: 1 if it succeds or 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;

	if (strcmp(key, "") == 0 || ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	if (!ht->array)
		return (0);

	if (ht->array[idx] && strcmp(key, ht->array[idx]->key) == 0)
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	ht->array[idx] = add_node(&ht->array[idx], key, value);
	return (1);
}
