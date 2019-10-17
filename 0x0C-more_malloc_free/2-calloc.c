#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - This will allocate memory for array
 * @nmemb: The number of elements of the array
 * @size: The size of bytes of each element in the array
 * Return: Will return a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
