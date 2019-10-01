#include "holberton.h"
/**
* swap_int - Swapping values
* @a: first parameter
* @b: second parameter
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
