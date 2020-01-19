#include "hash_tables.h"
/**
 * hash_table_print - Function that print elements
 * @ht: pointer to the hash table
 * Return: Nothing, only prints
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *var;
	unsigned int idx, flag = 0;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array)
		{
			var = ht->array[idx];
			for (; var; var = var->next)
			{
				if (flag != 0)
					printf(", ");
				else
					flag = 1;
				printf("\'%s\': \'%s\'", var->key, var->value);
				printf("\'");
			}
		}
	}
	printf("}\n");
}
