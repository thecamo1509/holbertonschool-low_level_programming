#include "holberton.h"
/**
* print_rev - Function to print in reverse
* @s: parameter
* Return: no return
*/

void print_rev(char *s)
{
	int i = 0;

	while (*s != ('\0'))
	{
	s++;
	++i;
	}
	for (i = i; i > 0; i--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
