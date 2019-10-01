#include "holberton.h"
/**
* puts_half - Function to print last half of a string
* @str: is the parameter
* Return: no return
*/

void puts_half(char *str)
{
	int i;
	int mitad;
	int imp;

	i = 0;
	while (str[i] != '\0')

	{
		i++;
	}

mitad = i / 2;

	if (i % 2 != 0)
	{
		mitad++;
	}

	for (imp = mitad; imp <= i; imp++)
	{
	_putchar(str[imp]);
	}
	_putchar('\n');
}
