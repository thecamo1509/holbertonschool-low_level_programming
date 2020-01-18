#include "hash_tables.h"
/**
 * key_index - Function that returns index value of a key
 * @key: Key
 * @size: size of the array
 * Return: Index value of a specific key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h = hash_djb2(key);

	return (h % size);
}
