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
	int *s = a;
	int *e = a;

	while (i < (n - 1))
	{
		i++;
		e++;
	}
	i = 0;
	while (i < (n / 2))
	{
		tmp = *s;
		*s = *e;
		*e = tmp;
		s++;
		e--;
		i++;
	}
}
