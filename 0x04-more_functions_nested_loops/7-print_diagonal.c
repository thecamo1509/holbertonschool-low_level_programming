#include "holberton.h"
/**
* print_diagonal - is a function to print a diagonal
* @n: is the times the \ is going to be printed
* Return: no return
*/

void print_diagonal(int n)
{
	int row;
	int column;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; row > column; column++)
			{
				_putchar(' ');
			}
		_putchar (92);
		_putchar ('\n');
		}
	}
}
