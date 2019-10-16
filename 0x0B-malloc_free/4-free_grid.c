#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - This will frees the memory
 * @grid: This is the grid from before
 * @height: Is the height of the grid
 * Return: No return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}