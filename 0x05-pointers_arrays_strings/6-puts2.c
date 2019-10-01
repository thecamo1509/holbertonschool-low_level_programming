#include "holberton.h"
/**
* puts2 - puts pair positions
* @str: parameter
* Return: no return
*/

void puts2(char *str)
{
	int i;

	_putchar(*str);
	while (*str != ('\0'))
	{
	str++;
	i++;
		if (i % 2  == 0 && i < *str) 
		{
		_putchar(*str);
		}
	}
_putchar('\n');	
}
