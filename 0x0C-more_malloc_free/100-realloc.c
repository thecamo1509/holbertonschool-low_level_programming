#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - This will reallocate a memory block
 * @ptr: Pointer to a memory previously allocated
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 * Return: No return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;
	char *ptrcpy;
	char *dest;

	ptr = malloc(old_size);
	new = malloc(new_size);

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptrcpy = ptr;
	dest = new;

	for (i = 0; i < new_size; i++)
	{
	dest[i] = ptrcpy[i];
	}
	free(ptr);
	return (new);
}
