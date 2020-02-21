#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves the element
 * @ht: pointer to the hash table
 * @key: The key to be looked for in the array
 * Return: 1 if it succeds or 0 if it fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *var;
	unsigned long int idx;

	if (!ht)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	var = ht->array[idx];
	while (var)
	{
		if (strcmp(key, var->key) == 0)
		{
			return (var->value);
		}
		var = var->next;
	}
	return (NULL);
}
