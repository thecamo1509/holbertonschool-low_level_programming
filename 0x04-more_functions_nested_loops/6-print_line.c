#include "holberton.h"
/**
* print_line - This is a function to print straight line
* @n: is the number of times the _ will be printed
* Return: no return
*/

void print_line(int n)
{
	int times;

	for (times = 0; times < n && n > 0; times++)
	{
		_putchar ('_');
	}
	_putchar('\n');
}
