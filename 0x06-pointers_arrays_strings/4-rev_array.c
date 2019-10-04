#include "holberton.h"
/**
* reverse_array - Reverse array
* @a: First parameter
* @n: amount of elements of the array
* Return: no return
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n--;
	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
	}
}
