#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: Size of the array
 * Return: A pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table->size = size;

	h_table->array = calloc(size, sizeof(char *));
	if (!h_table->array)
		return (NULL);

	return (h_table);
}
