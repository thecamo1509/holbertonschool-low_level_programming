#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - This is a function to create arrays of chars
 * @size: is the size of the array
 * @c: is the array
 * Return: It will return Null if the size is 0 or the p
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0 || size == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
