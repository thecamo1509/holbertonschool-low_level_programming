#include "holberton.h"
/**
* _puts - Printing a string
* @str: This is the parameter
* Return: no return
*/

void _puts(char *str)
{
	while (*str != ('\0'))
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
