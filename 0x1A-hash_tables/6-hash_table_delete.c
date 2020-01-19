#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: pointer to the hash table
 * Return: Nothing, only deletes
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int idx;
	hash_node_t *var, *prev;

	if (ht)
	{
		for (idx = 0; idx <= ht->size; idx++)
		{
			if (ht->array[idx])
			{
				var = ht->array[idx];
				for (; var; )
				{
					prev = var;
					var = var->next;
					free(prev->key);
					free(prev->value);
					free(prev);
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
