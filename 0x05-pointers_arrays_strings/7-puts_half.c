#include "holberton.h"
/**
* puts_half - Function to print last half of a string
* @str: is the parameter
* Return: no return
*/

void puts_half(char *str)
{
	int length_of_the_string;
	int mitad;
	int imp;

	length_of_the_string = 0;
	while (str[length_of_the_string] != 0)

	{
		length_of_the_string++;
	}

mitad = length_of_the_string / 2;

	if (length_of_the_string % 2 != 0)
	{
		mitad = (length_of_the_string - 1) / 2;
	}

	for (imp = mitad; imp < length_of_the_string; imp++)
	{
	_putchar(str[imp]);
	}
	_putchar('\n');
}
