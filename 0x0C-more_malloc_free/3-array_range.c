#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of int
 * @min: The minimum value
 * @max: The maximum value
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int i, lenght;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	lenght = (max - min) + 1;
	p = malloc(lenght * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min); i++)
	{
		p[i] = min + i;
	}
	return (p);
}
