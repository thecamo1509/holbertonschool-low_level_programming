#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Will return two a 2 pointer
 * @width: The width of the array
 * @height: the height of the array
 * Return: Will return a pointer
 */

int **alloc_grid(int width, int height)
{
	int **dest;
	int i, j, o, p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dest = malloc(height * (sizeof(int *)));

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dest[i] = malloc(sizeof(int) * width);
			if (dest[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(dest[j]);
				}
				free(dest);
			}
	}
	for (o = 0; o < height; o++)
	{
		for (p = 0; p < width; p++)
		{
		dest[o][p] = 0;
		}
	}
	return (dest);
}
