#include "function_pointers.h"
/**
 * array_iterator - This will execute a function given as a parameter
 * @size: size of the array
 * @action: Pointer to the function to use
 * @array: The array given
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size <= 0 || action == NULL)
		return;

	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
