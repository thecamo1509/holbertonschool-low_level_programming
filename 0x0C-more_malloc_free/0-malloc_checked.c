#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - This function will allocate memory
 * @b: Will receive an int
 * Return: This will return
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(unsigned int) * b);

	if (p == NULL || b == 0)
	{
		exit(98);
	}

	return (p);
}
