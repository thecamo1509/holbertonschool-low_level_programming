#include "function_pointers.h"
/**
 * int_index - This function searches for an integer
 * @array: The array to check
 * @size: size of the array
 * @cmp: Pointer to a function
 * Return: The index of the array when it does not match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
