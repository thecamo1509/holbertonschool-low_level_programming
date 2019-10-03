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

	while (*(a + i) < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
