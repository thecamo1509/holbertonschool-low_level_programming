#include "holberton.h"
/**
* print_square - Is a function to print a square
* @size: is the parameter
* Return: no return
*/

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{	
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
